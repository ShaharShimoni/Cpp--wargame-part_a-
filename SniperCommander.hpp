//
// Created by shahar on 19/05/2020.
//

#include "Soldier.hpp"

class SniperCommander:public Soldier{
private:
    // int initial_health_points;
    int damage_per_activity;

public:
    SniperCommander(){
        this->initial_health_points=120;
        this->damage_per_activity=100;
    }
    SniperCommander(int player_number){
        this->initial_health_points=120;
        this->damage_per_activity=100;
        this->player_number=player_number;

    }
    void attack_or_cure ();

//    void attack_or_cure () override{
//
//    }
};
