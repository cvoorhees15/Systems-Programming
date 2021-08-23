//
//  main.cpp
//  AppliedExam2
//
//  Created by Caleb Voorhees on 4/23/21.
//

#include <iostream>
#include <iomanip>
#include "Dice.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
    
    // Declare variables
    int oneCount(0), twoCount(0), threeCount(0), fourCount(0), fiveCount(0), sixCount(0), trials, rolls, seed;
    
    // Seed generator
    cout << "Enter seed for random generator: " << endl;
    cin >> seed;
    
    // Prompt user for trial amount
    cout << "Enter amount of dice rolls to execute: " << endl;
    cin >> trials;
    
    srand(seed);
    
    // Roll as many times as user requests and record results
    for(rolls=0; rolls < trials; rolls++)
    {
        Dice a;
        cout << "Trial " << rolls << ": " << a.getSide() << endl;
        
        if (a.isOne())
        {
            oneCount++;
        }
        
        if (a.isTwo())
        {
            twoCount++;
        }
        
        if (a.isThree())
        {
            threeCount++;
        }
        
        if (a.isFour())
        {
            fourCount++;
        }
        
        if (a.isFive())
        {
            fiveCount++;
        }
        
        if (a.isSix())
        {
            sixCount++;
        }
    }
    
    // Report results to console
    cout << fixed;
    cout << setprecision(2);
    
    cout << "\n" << trials << " trials were executed" << endl;
    cout << "One occurred " << oneCount << " times, which was " << ((float)oneCount/trials) * 100 << "% of the time" << endl;
    cout << "Two occurred " << twoCount << " times, which was " << ((float)twoCount/trials) * 100 << "% of the time" << endl;
    cout << "Three occurred " << threeCount << " times, which was " << ((float)threeCount/trials) * 100 << "% of the time" << endl;
    cout << "Four occurred " << fourCount << " times, which was " << ((float)fourCount/trials) * 100 << "% of the time" << endl;
    cout << "Five occurred " << fiveCount << " times, which was " << ((float)fiveCount/trials) * 100 << "% of the time" << endl;
    cout << "Six occurred " << sixCount << " times, which was " << ((float)sixCount/trials) * 100 << "% of the time" << endl;
    return 0;
}
