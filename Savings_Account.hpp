//
//  Savings_Account.hpp
//  
//
//  Created by Bruce Gooch on 3/25/20.
//

//  Edited by Edward Cruz on 03/29/2020.

#ifndef SAVINGS_ACCOUNT_HPP
#define SAVINGS_ACCOUNT_HPP

#include "Bank_Account.hpp"

#include <iostream>
#include <string>

using namespace std;

class Savings_Account: public Bank_Account
{
    protected:
        double interestRate;
    public:
        Savings_Account();
        Savings_Account(string, double, int, double);
    //Savings_Account(string OwnerName = "", double StartBalance = 0.0, int ActBal = 0, Double SavingsInterest = 0.003);
        void Create_Monthly_Statement();  //calculate interest and add it to balance
};

#endif /* Savings_Account_h */
