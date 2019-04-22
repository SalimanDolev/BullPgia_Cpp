#pragma once
#include <stdio.h>
#include <stdlib.h>
#include "Guesser.hpp"
#include <string>
using std::string;
namespace bullpgia{
class gusser;
class Chooser {
    public:
    //virtual uint play(Chooser& chooser, Guesser& guesser, uint length, uint maxTurns)=0;
    virtual string choose (uint length)=0;
    
    private:

};
}
