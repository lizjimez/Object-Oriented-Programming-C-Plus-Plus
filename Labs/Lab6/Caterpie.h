#ifndef CATERPIE
#define CATERPIE

#include <string>
#include <vector>
#include "Pokemon.h"
using namespace std;

class Caterpie : public Pokemon {
    public:
        // Contructors
        Caterpie();
        Caterpie(string name, int hp, int att, int def, vector<string> t);
        // Mutator Functions
        void speak();
        void printStats();
    private:
        vector<string> skills;
};
#endif