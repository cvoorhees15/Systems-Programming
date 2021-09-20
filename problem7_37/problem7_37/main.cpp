//
//  main.cpp
//  problem7_37
//
//  Created by Diaz, Christopher on 4/22/21.
//  Copyright © 2021 Diaz, Christopher. All rights reserved.
//

#include <iostream>
using namespace std;

#include "Card.h"


int main(int argc, const char * argv[]) {
    
    int rank;
    int suit;
    int seed;
    char suitChar;
    int ntrials;
    int nevents = 0;                // # times we hit the event in a trial
    
    cout << "Enter the number of trials: ";
    cin >> ntrials;
    cout << "Enter the seed value: ";
    cin >> seed;
    
    srand(seed);
    
    for (int i=0; i<ntrials; ++i)
    {
        rank = rand()%13 + 2;
        suit = rand()%4;

        switch (suit)
        {
            case 0:
                suitChar = 'D';
                break;
            case 1:
                suitChar = 'C';
                break;
            case 2:
                suitChar = 'H';
                break;
            case 3:
                suitChar = 'S';
                break;
        }
        Card card(suitChar,rank);
    
        card.displayCard(cout);
        cout << endl;
    
        if (rank <= 10)
        {
            ++nevents;
            cout << "You drew a non-face card\n";
        }
    }
    
    printf("%i of %i trials hit the event\n",nevents,ntrials);
    
    return 0;
}
