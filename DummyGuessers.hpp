#pragma once
#include "Guesser.hpp"
using std::string;


/**
 * ConstantGuesser is a guesser that always guesses the same string. 
 */
class ConstantGuesser: public bullpgia::Guesser {
		string myConstantString;
		int length;
	public:
		ConstantGuesser(const string& constantString) { myConstantString = constantString; }
		string guess() override {
			return myConstantString;
		}
		void startNewGame(int length1)override;
};

/**
 * RandomGuesser is a guesser that guesses a random string.
 */
class RandomGuesser: public bullpgia::Guesser {
	string s_guees;
	int length;
	string guess() override;
	void startNewGame(int length1)override;
};
