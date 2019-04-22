#pragma once
#include <stdio.h>
#include <stdlib.h>
#include "Chooser.hpp"
#include <string>
using std::string;

namespace bullpgia{

class Chooser;
class Guesser {
    protected:
    string s;
    int length;
    public:
    virtual string guess()=0;
    virtual void startNewGame(int length)=0;
    virtual void learn(string replay){};

};
}
