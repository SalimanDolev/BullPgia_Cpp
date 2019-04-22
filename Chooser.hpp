#pragma once
#include <stdio.h>
#include <stdlib.h>
#include "Guesser.hpp"
#include <string>
#include "calculate.hpp"
using std::string;
namespace bullpgia{
class gusser;
class Chooser {
    protected:
    string s;
    public:
    virtual string choose (uint length)=0;
    
    private:

};
}
