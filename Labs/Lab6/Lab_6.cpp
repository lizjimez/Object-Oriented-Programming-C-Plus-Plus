/***
 * CSE 2010 Fall 2023
 * Lab #6
 * Lizbeth Jimenez #007670332
 * 1 December 2023
 *
 * Learn how to derive a class base class and understand how member functions and variables can be passed to a derived class. 
 *
 * The most challening was setting up VS and Github on my computer. I spent a few hours trying to fix problems throughout both applications. One of my solutions was to email the Prof
 * and she quickly solved it. The other I watched the tutorial video for Github.
 * 
 *
***/

#include <iostream>
#include "Charmander.h"
#include "Caterpie.h"
using namespace std;

int main()
{  
    // Charmander first = Charmander();
    vector<string> pokemonType;
    pokemonType.push_back("Fire");

    cout << "-------Constructor Created---------\n";
    Charmander charlie = Charmander("Charlie", 100, 4, 4, pokemonType);

    // Charmander
    cout << "\n-------Direct Speak---------\n";
    charlie.speak();
    
    // Pokemon pointer to Charmander
    Pokemon * p1 = &charlie ;
    cout << "\n------- Speak called from Pokemon Pointer---------\n";
    (*p1).speak();

    // Charmander pointer to Charmander
    Charmander * c1 = &charlie ;
    cout << "\n------- Speak called from Charmander Pointer---------\n";
    (*c1).speak();

    // Charmander
    cout << "\n------- Print Stats---------\n";
    charlie.printStats();


    // Caterpie first = Caterpie();
    pokemonType.push_back("String Shot");

    cout << "------- Caterpie Constructor Created---------\n";
    Caterpie WORMMUNCHER = Caterpie("WORMMUNCHER", 45, 35, 30, pokemonType);

    // Caterpie
    cout << "\n-------Direct Speak---------\n";
    WORMMUNCHER.speak();
    
    // Pokemon pointer to Caterpie
    Pokemon * p2 = &WORMMUNCHER ;
    cout << "\n------- Speak called from Pokemon Pointer---------\n";
    (*p2).speak();

    // Caterpie pointer to Caterpie
    Caterpie * c2 = &WORMMUNCHER ;
    cout << "\n------- Speak called from Caterpie Pointer---------\n";
    (*c2).speak();

    //  Caterpie
    cout << "\n------- Print Stats---------\n";
    WORMMUNCHER.printStats();

}