#pragma once
#include <stdio.h>
#include <stdlib.h>
#include "Chooser.hpp"
#include <string>
using std::string;

namespace bullpgia{
class Chooser;
class Guesser {
    public:
    //virtual uint play( Chooser& chooser, Guesser& guesser, uint length, uint maxTurns)=0;
    virtual string guess()=0;
    void startNewGame(int length);
    std::string learn(string replay);

};
}
