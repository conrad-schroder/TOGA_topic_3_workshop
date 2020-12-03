// topic 3 part 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

class character 
{
public: 
    string character_name;
    appearence appearence;
    preset preset;
    talents talents;
    tags tags;

    character() 
    {
        character_name = "placeholder";
    }
};
class origin
{
public:
    string race;
    string gender;

    origin() 
    {
        race = "placeholder";
        gender = "placeholder";

    }
};
class appearence
{
public:
    int skin_colour_option;
    int face_option;
    int hair_style_option;
    int hair_colour_option;
    int facial_features_option;
    int voice_option;

    appearence() 
    {
        skin_colour_option = 0;
        face_option = 0;
        hair_style_option = 0;
        hair_colour_option = 0;
        facial_features_option = 0;
        voice_option = 0;
    }//all placeholder numbers

};

class preset
{
public:
    attributes attributes;
    abilities abilities;
    skills skills;
};

class attributes
{
public:
    int strength;
    int finesse;
    int intelligence;
    int constitution;
    int memory;
    int wits;

    attributes() 
    {
        strength = 0;
        finesse = 0;
        intelligence = 0;
        constitution = 0;
        memory = 0;
        wits = 0;
    }

};

class abilities
{
public:
    combat_abilities combat;
    civil_abilities civil;

};

class combat_abilities
{
public:
    string com_option1;
    string com_option2;

    combat_abilities() 
    {
        com_option1 = "placeholder";
        com_option2 = "placeholder";
    }
};

class civil_abilities
{
public:
    string civ_option1;
    string civ_option2;

    civil_abilities()
    {
        civ_option1 = "placehodler";
        civ_option2 = "placeholder";
    }

};

class skills
{
public:
    skill_options skill1;
    skill_options skill2;
    skill_options skill3;


};

class skill_options
{
public:
    string skill_choice;

    skill_options() 
    {
        skill_choice = "placeholder";
    }
};

class talents
{
public:
    string talent1;
    string talent2;
    string talent3;

    talents() 
    {
        talent1 = "placeholder";
        talent2 = "placeholder";
        talent3 = "placeholder";
    }

};

class tags
{
public:
    tag_options tag1;
    tag_options tag2;

};

class tag_options
{
public:
    string tag_option;

    tag_options() 
    {
        tag_option = "placeholder";
    }
};




int main()
{
    
}


