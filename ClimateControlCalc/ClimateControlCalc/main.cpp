//
//  main.cpp
//  ClimateControlCalc
//
//  Created by c.voorhees on 3/8/21.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
   
    float rh;
    int temp;
    float hi;
    
    cout << "Enter your relative humidity: ";
    cin >> rh;
    cout << "Now enter your temp: ";
    cin >> temp;
    
    cout << "This is your heat index: ";
    hi = 0.5 * (temp + 61.0 + ((temp-68.0)*1.2) + (rh*0.094));
    if (hi > 80)
    {
        hi = ((-42.379) + (2.04901523 * temp) + (10.14333127 * rh) - (.22475541 * temp * rh)  - (.00683783 * temp * temp) - (.05481717 * rh * rh) + (.00122874 * temp * temp * rh) + (.00085282 * temp * rh * rh) - (.00000199 * temp * temp * rh * rh));
       
        cout << hi << endl;
    }
    else
    {
        cout << hi << endl;
    }
        
}
