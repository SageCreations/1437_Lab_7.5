//  Created by Edward Cruz on 03/29/2020
//  Lab_7.5 --- High_Interest_Savings.cpp

#include "High_Interest_Savings.hpp"

#include <iostream>
#include <string>

//******* CONSTRUCTOR *************************************
High_Interest_Savings::High_Interest_Savings(std::string OwnerName = "", double StartBalance = 0.0, int ActBal = 0, double highInterestRate = 0.004, double MinBalance = 1500.0) {
    Owner = OwnerName;
    Balance = StartBalance;
    Account_Number = ActBal;
    interestRate = highInterestRate;
    MinimumBalance = MinBalance;
} //*******************************************************

//******* FUNCTIONS ***************************************
void High_Interest_Savings::Create_Monthly_Statement() {
  double amount = Balance;
  amount *= interestRate;
  Balance += amount;
} //*******************************************************