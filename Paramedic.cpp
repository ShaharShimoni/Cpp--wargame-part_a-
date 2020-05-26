//
// Created by shahar on 19/05/2020.
//

#include "Paramedic.hpp"
void Paramedic::attack_or_cure (std::vector<std::vector<Soldier*>> board,std::pair<int,int> source) { //next to him
    std::pair<int, int> placeParamedic = source;
    for (int i = 0; i < board.size(); i++) {
        for (int j = 0; j < board[i].size(); j++){
            Soldier *s=board[i][j];
            if((source.first==i && (source.second=j+1||source.second==j-1))||(source.first==j && (source.second==i+1||source.second==i-1))){
                //this soldier is next to the Paramedic
                s->initial_health_points=s->its_max_health_points;

            }
        }

    }


}