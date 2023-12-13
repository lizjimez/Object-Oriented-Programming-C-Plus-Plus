#include <iostream>
#include <stdio.h>
#include "Caterpie.h"

/**
 * @brief Construct a new Caterpie:: Caterpie object
 * 
 */
Caterpie::Caterpie() : Pokemon() {
    type.push_back("String Shot");
    skills.push_back("Tackle");
    skills.push_back("Bug Bite");

    cout << "Default Constructor (Caterpie)\n";
}

/**
 * @brief Construct a new Caterpie:: Caterpie object
 * 
 * @param name 
 * @param hp 
 * @param att 
 * @param def 
 * @param t 
 */
Caterpie::Caterpie(string name, int hp, int att, int def, vector<string> t) : Pokemon(name, hp, att, def , t) {
    type.push_back("Bug");
    skills.push_back("Tackle");
    skills.push_back("Bug Bite");

    cout << "Overloaded Default Constructor (Caterpie)\n";
}

/**
 * @brief What Caterpie says
 * 
 */
void Caterpie:: speak(){
    cout << "Caterpie-pie\n";
}

/**
 * @brief calls printStats from the parent class (Pokemon) and appends the skills used for Caterpie
 * 
 */
void Caterpie::printStats(){
    Pokemon::printStats();
    cout << "Skills: ";
    for(int i = 0; i < skills.size(); i++){
        cout << skills[i] << "\t";
    }
    cout << endl;
}