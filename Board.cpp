//
// Created by shahar on 19/05/2020.
//

#include "Board.hpp"
using namespace WarGame;
using namespace std;
#include <iostream>

Soldier*& Board::operator[](std::pair<int,int> location){
    Soldier *&s=this->board[location.first][location.second];
    return s;
}

Soldier* Board::operator[](std::pair<int,int> location) const{
         Soldier* s=this->board[location.first][location.second];
         return s;
}

std::pair<int,int> Board::actual_move(uint player_number, std::pair<int,int> source, MoveDIR direction){

    std::pair<int,int> new_source;
    new_source.first=source.first;
    new_source.second=source.second;
    switch(direction) {
        case Up :
            new_source.first=source.first+1;
            break;
        case Down :
            new_source.first=source.first-1;
            break;
        case Left :
            new_source.second=source.second-1;
            break;
        case Right :
            new_source.second=source.second+1;
            break;
    }
    if(this->board[new_source.first][new_source.second]){  //another soldier is in this place
        throw exception();
    }
    return new_source;

}

void Board::move(uint player_number, std::pair<int,int> source, MoveDIR direction){//our actual move //finifsh it !
//    Soldier* s=this->board[source.first][source.second];    //The soldier we need to move
//
//    if(s==NULL){     //There is no soldier in this place
//        //cout<<"problem 1"<<endl;
//        throw exception();
//    }
//    if(s->player_number!=player_number){    //The soldier doesnt belong to the player
//       // cout<<"problem 2"<<endl;
//        throw exception();
//    }
//    std::pair<int,int> new_source=actual_move(player_number,  source, direction);
//    ////// move to new_source and then -delete from old source (add a copy for each soldier)
//    s->attack_or_cure(this->board,new_source);  //22/5

}
bool Board::has_soldiers(uint player_number) const{   //pass on all soldiers to see if they are of player_numer ?
    cout<<"in has soldier"<<endl;
    for (int i = 0; i < this->board.size(); i++) {
        for (int j = 0; j < this->board[i].size(); j++)
            if(this->board[i][j])  //!=NULL
            if(this->board[i][j]->player_number==player_number){

                return true;
            }
    }

    return false;
}