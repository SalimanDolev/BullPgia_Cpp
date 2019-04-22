#pragma once
#include "SmartGuesser.hpp"
using std::string;

/**
 * RandomGuesser is a guesser that guesses a random string.
 */
class SmartGuesser: public bullpgia::Guesser {
    public: 
    SmartGuesser(){};
	string guess() override;
};