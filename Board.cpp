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

void Board::move(uint player_number, std::pair<int,int> source, MoveDIR direction){//our actual move
    Soldier* s=this->board[source.first][source.second];    //The soldier we need to move
    //There is no soldier in this place
    if(s==NULL){
        throw exception();
    }
    //The soldier doesnt belong to the player
    if(s->player_number!=player_number){
        throw exception();
    }
    // if another soldier is in the target location - every one is going for a different way

    s->attack_or_cure();

}
bool Board::has_soldiers(uint player_number) const{   //pass on all soldiers to see if they are of player_numer ?
    for (int i = 0; i < this->board.size(); i++) {
        for (int j = 0; j < this->board[i].size(); j++)
            if(this->board[i][j])  //!=NULL
            if(this->board[i][j]->player_number==player_number){
                return true;
            }
    }
    return false;
}