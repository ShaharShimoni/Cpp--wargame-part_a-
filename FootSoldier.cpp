//
// Created by shahar on 19/05/2020.
//

#include "FootSoldier.hpp"
#include <cmath>
void  FootSoldier::attack_or_cure (std::vector<std::vector<Soldier*>> board,std::pair<int,int> source) {  //The closest
    Soldier *s; // saves the closest soldier
    int min_distance=1000;
    for (int i = 0; i < board.size(); i++) {
        for (int j = 0; j < board[i].size(); j++) {
              int distance= sqrt(pow(source.first-i, 2)+ pow(source.second-j, 2));
              if( distance<min_distance){
                  min_distance= distance;
                  s=board[i][j];
              }
        }
    }
    s->initial_health_points=s->initial_health_points-this->damage_per_activity;

}