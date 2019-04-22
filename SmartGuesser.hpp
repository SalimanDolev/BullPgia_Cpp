#pragma once
#include "Guesser.hpp"
using std::string;

class SmartGuesser: public bullpgia::Guesser {
    public: 
    int length;
    SmartGuesser(){};
	string guess() override;
    void startNewGame(int length1)override;

};