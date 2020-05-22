//
// Created by shahar on 19/05/2020.
#pragma once
#include "Soldier.hpp"
class FootCommander:public Soldier{
private:
     //int initial_health_points;
     int damage_per_activity;
public:
    FootCommander(){
         this->initial_health_points=150;
         this->damage_per_activity=20;
     }
    FootCommander(int player_number){
        this->initial_health_points=150;
        this->damage_per_activity=20;
        this->player_number=player_number;
    }
    void attack_or_cure ();
};