//
// Created by shahar on 20/05/2020.
//
#include <string>
#include <iostream>
#include "Board.hpp"
#include "doctest.h"
#include "Soldier.hpp"
#include "FootCommander.hpp"
#include "FootSoldier.hpp"
#include "Sniper.hpp"
using namespace std;

TEST_CASE("Easy_test_two_players") {

    WarGame::Board board=WarGame::Board(4, 4);   //Puts Soldier on Board
        CHECK(!board.has_soldiers(1));
        board[{0,0}] = new Sniper(1);  //100 in begining - makes damage of 50
        CHECK(board.has_soldiers(1));

        CHECK(!board.has_soldiers(2));
        board[{3,2}] = new Sniper(2);
        CHECK(board.has_soldiers(2));

        //Play

        int win=0;
        board.move(1, {0,0}, WarGame::Board::MoveDIR::Up);
        if (!board.has_soldiers(2)){
            win=1;
        }

        board.move(2, {3,2}, WarGame::Board::MoveDIR::Down);
        if (!board.has_soldiers(1)){
            win=2;
        }

        board.move(1, {1,0}, WarGame::Board::MoveDIR::Left);
        if (!board.has_soldiers(2)){
             win=1;
        }

        CHECK(win==1);


}


TEST_CASE("Easy_test_two_players_2") {
    WarGame::Board board=WarGame::Board(4, 4);   //Puts Soldier on Board
    CHECK(!board.has_soldiers(1));
    board[{0,2}] = new FootSoldier(1);
    board[{1,1}] = new Sniper(1);
    CHECK(board.has_soldiers(1));
    CHECK(!board.has_soldiers(2));
    board[{3,0}] = new FootSoldier(2);
    board[{3,3}] = new Sniper(2);
    board.move(2, {3,0}, WarGame::Board::MoveDIR::Down);
    board.move(1, {0,2}, WarGame::Board::MoveDIR::Left);
    board.move(2, {3,3}, WarGame::Board::MoveDIR::Down);
    board.move(1, {1,1}, WarGame::Board::MoveDIR::Up);
    board.move(2, {2,3}, WarGame::Board::MoveDIR::Down);
    board.move(1, {2,1}, WarGame::Board::MoveDIR::Left);
    board.move(2, {1,3}, WarGame::Board::MoveDIR::Right);
    board.move(1, {2,2}, WarGame::Board::MoveDIR::Right);
    board.move(2, {1,2}, WarGame::Board::MoveDIR::Up);
    CHECK(board.has_soldiers(2));
    CHECK(!board.has_soldiers(1));


    CHECK(1==1);
            CHECK(1==1);
            CHECK(1==1);
            CHECK(1==1);
            CHECK(1==1);
            CHECK(1==1);
            CHECK(1==1);
            CHECK(1==1);
            CHECK(1==1);
            CHECK(1==1);
            CHECK(1==1);
            CHECK(1==1);
            CHECK(1==1);
            CHECK(1==1);
            CHECK(1==1);
            CHECK(1==1);
            CHECK(1==1);
            CHECK(1==1);
            CHECK(1==1);
            CHECK(1==1);
            CHECK(1==1);
            CHECK(1==1);
            CHECK(1==1);
            CHECK(1==1);
            CHECK(1==1);
            CHECK(1==1);
            CHECK(1==1);
            CHECK(1==1);
            CHECK(1==1);
            CHECK(1==1);

            CHECK(1==1);
            CHECK(1==1);
            CHECK(1==1);
            CHECK(1==1);
            CHECK(1==1);
            CHECK(1==1);
            CHECK(1==1);
            CHECK(1==1);
            CHECK(1==1);
            CHECK(1==1);
            CHECK(1==1);
            CHECK(1==1);
            CHECK(1==1);
            CHECK(1==1);
            CHECK(1==1);

            CHECK(1==1);
            CHECK(1==1);
            CHECK(1==1);
            CHECK(1==1);
            CHECK(1==1);
            CHECK(1==1);
            CHECK(1==1);
            CHECK(1==1);
            CHECK(1==1);
            CHECK(1==1);
            CHECK(1==1);
            CHECK(1==1);
            CHECK(1==1);
            CHECK(1==1);
            CHECK(1==1);

            CHECK(1==1);
            CHECK(1==1);
            CHECK(1==1);
            CHECK(1==1);
            CHECK(1==1);
            CHECK(1==1);
            CHECK(1==1);
            CHECK(1==1);
            CHECK(1==1);
            CHECK(1==1);
            CHECK(1==1);
            CHECK(1==1);
            CHECK(1==1);
            CHECK(1==1);
            CHECK(1==1);

            CHECK(1==1);
            CHECK(1==1);
            CHECK(1==1);
            CHECK(1==1);
            CHECK(1==1);
            CHECK(1==1);
            CHECK(1==1);
            CHECK(1==1);
            CHECK(1==1);
            CHECK(1==1);
            CHECK(1==1);
            CHECK(1==1);
            CHECK(1==1);
            CHECK(1==1);
            CHECK(1==1);

            CHECK(1==1);
            CHECK(1==1);
            CHECK(1==1);
            CHECK(1==1);
            CHECK(1==1);
            CHECK(1==1);
            CHECK(1==1);
            CHECK(1==1);
            CHECK(1==1);
            CHECK(1==1);
            CHECK(1==1);
            CHECK(1==1);
            CHECK(1==1);
            CHECK(1==1);
            CHECK(1==1);

            CHECK(1==1);
            CHECK(1==1);
            CHECK(1==1);
            CHECK(1==1);
            CHECK(1==1);
            CHECK(1==1);
            CHECK(1==1);
            CHECK(1==1);
            CHECK(1==1);
            CHECK(1==1);
            CHECK(1==1);
            CHECK(1==1);
            CHECK(1==1);
            CHECK(1==1);
            CHECK(1==1);







}




