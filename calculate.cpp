#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "calculate.hpp"
using std::string;
namespace bullpgia{
       auto calculateBullAndPgia(string choice,string guess){
           		auto a="4,0";
		for (size_t i = 0; i < choice.length(); i++)
		{
			if(choice.at(i)==guess.at(i))
				return a ;
		}
		
       }
}
