#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    float tip{};
    float tax{};
    double mealCost{};
    int totalCost{};
    
    cin >> mealCost >> tip >> tax;
    
    tip = mealCost * (tip / 100);
    tax = mealCost * (tax / 100);
    totalCost = round(mealCost + tip + tax);
    
    cout << "The total meal cost is " << totalCost <<  " dollars." << endl;
        
    return 0;
}

