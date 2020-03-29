//
//  High_Interest_Savings.hpp
//  
//
//  Created by Bruce Gooch on 3/25/20.
//

//  Edited by Edward Cruz on 03/29/2020.

#ifndef HIGH_INTEREST_SAVINGS_HPP
#define HIGH_INTEREST_SAVINGS_HPP

#include "Savings_Account.hpp"

#include <iostream>
#include <string>

using namespace std;

class High_Interest_Savings: public Savings_Account
{
    private:
        double interestRate;
        double MinimumBalance;
    public:
        High_Interest_Savings(string, double, int, double, double);
   // High_Interest_Savings(string OwnerName = "", double StartBalance = 0.0, int ActBal = 0, double highInterestRate = 0.004, double MinBalance = 1500.0);
       // Create_Monthly_Statement() calculate interest and add it to balance
};

#endif /* High_Interest_Savings_h */
