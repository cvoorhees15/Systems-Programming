//
//  main.cpp
//  SystProgFinal
//
//  Created by Caleb Voorhees on 5/20/21.
//

#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, const char * argv[]) {
    int n_rows = 10;
    int n_columns = 7;
    int daysOvrAvg = 0;
    float infile [n_rows][n_columns];
    float total = 0;
    float avg;
    
    // Import data file
    ifstream inputFile;
    inputFile.open("power.dat");
    
    for (int i = 0; i != n_rows; i++){
        for(int j = 0; j != n_columns; j++){
            
            // Move data into array
            inputFile >> infile[i][j];
            total = total + infile[i][j];
            cout << " \ntotal: " << total;
        }
    }
    
    // Calculate average
    avg = total / 70;
    cout << "\nAverage power output: " << avg << endl;
    
    for (int i = 0; i != 10; i++){
        for(int j = 0; j != 7; j++){
            
            if (infile[i][j] > avg)
            {
                daysOvrAvg++;
            }
            
        }
    }
    
    // Return amount of days over average
    cout << "There were " << daysOvrAvg << " days where power output exceeded the average." << endl;

    
    

    return 0;
}
