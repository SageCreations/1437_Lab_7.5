//
//  Savings_Account.hpp
//  
//
//  Created by Bruce Gooch on 3/25/20.
//

#ifndef Savings_Account_h
#define Savings_Account_h

#include <stdio.h>
#include <string>

using namespace std;

class Savings_Account: public Bank_Account
{
    private:
        double interestRate;
    public:
        Savings_Account(string, double, int, double);
    //Savings_Account(string OwnerName = "", double StartBalance = 0.0, int ActBal = 0, Double SavingsInterest = 0.003);
    // Create_Monthly_Statement() calculate interest and add it to balance
};

#endif /* Savings_Account_h */
