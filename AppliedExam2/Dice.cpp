//
//  Dice.cpp
//  AppliedExam2
//
//  Created by Caleb Voorhees on 4/23/21.
//

#include "Dice.hpp"
#include <cstdlib>

// Constructor
Dice::Dice()
{
    sideUp = rand()%6;
    
        switch (sideUp)
        {
            case 0:
                sideUpStr = "One";
                break;
            case 1:
                sideUpStr = "Two";
                break;
            case 2:
                sideUpStr = "Three";
                break;
            case 3:
                sideUpStr = "Four";
                break;
            case 4:
                sideUpStr = "Five";
                break;
            case 5:
                sideUpStr = "Six";
                break;
        }
    
}

// Accessor methods
string Dice::getSide()
{
    return (sideUpStr);
}

bool Dice::isOne()
{
    return (sideUpStr == "One");
}

bool Dice::isTwo()
{
    return (sideUpStr == "Two");
}

bool Dice::isThree()
{
    return (sideUpStr == "Three");
}

bool Dice::isFour()
{
    return (sideUpStr == "Four");
}

bool Dice::isFive()
{
    return (sideUpStr == "Five");
}

bool Dice::isSix()
{
    return (sideUpStr == "Six");
}
