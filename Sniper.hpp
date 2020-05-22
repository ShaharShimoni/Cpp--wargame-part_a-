//
// Created by shahar on 19/05/2020.
//
#include "Soldier.hpp"
class Sniper:public Soldier{
private:
    // int initial_health_points;
    int damage_per_activity;
public:
    Sniper(){
        this->initial_health_points=100;
        this->damage_per_activity=50;
    }
    Sniper(int player_number){
        this->initial_health_points=100;
        this->damage_per_activity=150;
        this->player_number=player_number;

    }
    void attack_or_cure () override{

    }


};

