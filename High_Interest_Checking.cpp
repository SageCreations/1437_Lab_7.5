//  Created by Edward Cruz on 03/29/2020
//  Lab_7.5 --- High_Interest_Checking.cpp

#include "High_Interest_Checking.hpp"

#include <iostream>
#include <string>

//******* DEFAULT CONSTRUCTOR *****************************
High_Interest_Checking::High_Interest_Checking() {
    Owner = "";
    Balance = 0.0;
    Account_Number = 0;
    InterestRate = 0.005;
    MinimumBalance = 5000.0;
} //*******************************************************

//******* OVERLOADED CONSTRUCTOR **************************
High_Interest_Checking::High_Interest_Checking(std::string OwnerName, double StartBalance, int ActBal, double NoServiceInterest, double MinBal) {
    Owner = OwnerName;
    Balance = StartBalance;
    Account_Number = ActBal;
    InterestRate = NoServiceInterest;
    MinimumBalance = MinBal;
} //*******************************************************

//******* FUNCTIONS ***************************************

// Create_Monthly_Statement() calculate interest and add it to balance
       // No interest if Month end balance is less than minimum balance
  //*******************************************************