//
// Created by shahar on 19/05/2020.
//
#include "Soldier.hpp"
class ParamedicCommander:public Soldier{
private:
    // int initial_health_points;
    int health_per_activity;
public:
    ParamedicCommander(){
        this->initial_health_points=200;
        this->health_per_activity=100;
    }
    ParamedicCommander(int player_number){
        this->initial_health_points=200;
        this->health_per_activity=100;
        this->player_number=player_number;

    }
    void attack_or_cure ();
};