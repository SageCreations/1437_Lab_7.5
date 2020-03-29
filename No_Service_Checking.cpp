//  Created by Edward Cruz on 03/29/2020
//  Lab_7.5 --- No_Service_Checking.cpp

#include "No_Service_Checking.hpp"

#include <iostream>
#include <string>

//******* DEFAULT CONSTRUCTOR *****************************
No_Service_Checking::No_Service_Checking()  {
    Owner = "";
    Balance = 0.0;
    Account_Number = 0;
    InterestRate = 0.002;
    MinimumBalance = 100.0;
} //*******************************************************

//******* OVERLOADED CONSTRUCTOR **************************
No_Service_Checking::No_Service_Checking(std::string OwnerName, double StartBalance, int ActBal, double NoServiceInterst, double MinBal) {
    Owner = OwnerName;
    Balance = StartBalance;
    Account_Number = ActBal;
    InterestRate = NoServiceInterst;
    MinimumBalance = MinBal;
} //*******************************************************

//******* FUNCTIONS ***************************************

// Create_Monthly_Statement() calculate interest and add it to balance

  //*******************************************************