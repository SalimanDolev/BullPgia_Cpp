#pragma once
#include "Guesser.hpp"
using std::string;

class SmartGuesser: public bullpgia::Guesser {
    public: 
    SmartGuesser(){};
	string guess() override;
    void startNewGame(int length1)override;
    void learn(string replay)override;

};