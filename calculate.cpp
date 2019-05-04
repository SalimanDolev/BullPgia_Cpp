#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "calculate.hpp"
#include <iostream>
using std::string;
using namespace std;
namespace bullpgia{
     string calculateBullAndPgia(const string &choice/*5555*/, const string &guess/*5444*/) {
    uint bull=0;
    uint pgia=0;

    for(int i =0; i<choice.length();i++){
        for(int j=bull; j<guess.length(); j++){
            if(i==j && choice[i]==guess[j]){
                ++bull;break;
            }else if(i!=j && choice[i]==guess[j]){
                ++pgia;
            }
        }
    }

    return to_string(bull)+","+to_string(pgia);
    }

}
