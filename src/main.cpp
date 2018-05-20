//============================================================================
// Name        : 401k.cpp
// Author      : Peter Gillespie
// Version     :
// Copyright   : Your copyright notice
// Description : Basic 401k and savings calculator. For informational purposes only.
// This does not in any way constitute as financial advice.
//============================================================================

#include <iostream>
#include <string>
#include "Calculation.h"

using namespace std;

string calcSavingGoal{};
string endingBalance{};

int main() {
		Calculation calculation;

		cout << "Do you want to calculate your 401k ending balance at retirement? (y or n) " << endl;
		cin >> endingBalance;
		if (endingBalance == "y"){
			calculation.endingBalance();
		}

		cout << "Do you want to calculate how much you need to save per month to reach your retirement goal? (y or n) " << endl;
    	cin >> calcSavingGoal;
        if (calcSavingGoal == "y"){
        	calculation.monthlySavings();
        }
        return 0;
}
