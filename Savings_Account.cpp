//  Created by Edward Cruz on 03/29/2020
//  Lab_7.5 --- Savings_Account.cpp

#include "Savings_Account.hpp"

#include <iostream>
#include <string>

//High_Interest_Savings was erroring without this defualt constructor
Savings_Account::Savings_Account() {
    Owner = "";
    Balance = 0.0;
    Account_Number = 0;
    interestRate = 0.003;
}

//******* CONCTRUCTOR *************************************
Savings_Account::Savings_Account(std::string OwnerName, double StartBalance, int ActBal, double SavingsInterest) {
    Owner = OwnerName;
    Balance = StartBalance;
    Account_Number = ActBal;
    interestRate = SavingsInterest;
} //*******************************************************

//******* FUNCTIONS ***************************************


// Create_Monthly_Statement() calculate interest and add it to balance

  //*******************************************************