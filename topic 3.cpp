// topic 3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include <string>

class stadium 
{
public:
    string stadium_name;
    string weather;
    string stadium_music;
    bool is_day;
    Match match;

    stadium() 
    {
        stadium_name = "Placeholder";
        weather = "placeholder";
        stadium_music = "placeholder";
    }
};

class Match
{
public:
    float time_left;
    int team1_score;
    int team2_score;
    bool overtime;
    position ball_location;
    Team team1;
    Team team2;

    Match() 
    {
        time_left = 90;
        team1_score = 0;
        team2_score = 0;
        overtime = false; 
    }
};



class Team 
{
public:
    name team_name; 
    int team_rating;
    Players player1;
    Players player2;
    Players player3;
    Players player4;
    Players player5;
    Players player6;
    Players player7;
    Players player8;
    Players player9;
    Players player10;
    Players player11;

    Team() 
    {
        team_rating = 0;//placeholder 
    }

};

class Players
{
public:
    name player_name;
    int player_skill;
    bool is_right_footed;
    position player_position;

    Players()
    {
        player_skill = 0; //placeholder
        is_right_footed = true; //placeholder
    }
};

class position 
{
public:
    float position_x;
    float position_y;

    position() 
    {
        position_x = 0;//placeholder
        position_y = 0;//placeholder 
    }
};

class name 
{
public:
    string name1;

    name() 
    {
        name1 = "placeholder";
    }
};



int main()
{
    std::cout << "Hello World!\n";
}


