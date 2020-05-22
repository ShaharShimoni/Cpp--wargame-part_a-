//
// Created by shahar on 19/05/2020.
//
#pragma once

#include "Soldier.hpp"
class FootSoldier:public Soldier{
private:
   // int initial_health_points;
    int damage_per_activity;
public:
 FootSoldier(){
        this->initial_health_points=100;
        this->damage_per_activity=10;
    }
    FootSoldier(int player_number){
        this->initial_health_points=100;
        this->damage_per_activity=10;
        this->player_number=player_number;
    }
    void attack_or_cure () ;
};