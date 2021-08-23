//
//  Dice.hpp
//  AppliedExam2
//
//  Created by Caleb Voorhees on 4/23/21.
//

#ifndef Dice_hpp
#define Dice_hpp

#include <stdio.h>
#include <string>
using namespace std;

class Dice
{
private:
    int sideUp;
    string sideUpStr;
    
public:
    Dice();
    string getSide();
    bool isOne();
    bool isTwo();
    bool isThree();
    bool isFour();
    bool isFive();
    bool isSix();
    
    
};



#endif /* Dice_hpp */
