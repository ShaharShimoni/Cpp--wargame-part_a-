//
// Created by shahar on 19/05/2020.
//
#include "Soldier.hpp"
class Paramedic:public Soldier{
private:
    int health_per_activity;
public:
    Paramedic(){
        this->initial_health_points=100;
        this->health_per_activity=50;
    }
    Paramedic(int player_number){
        this->initial_health_points=100;
        this->health_per_activity=50;
        this->player_number=player_number;
    }
    void attack_or_cure();
};
