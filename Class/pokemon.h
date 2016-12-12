#pragma once
#include <string>
using namespace std;



class Pokemon{
    private:
        string name;
        int level;
    public:
        Pokemon();
        Pokemon(string, int);
        void setName(string name);
        string getName();
};