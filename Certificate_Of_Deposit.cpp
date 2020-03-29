//  Created by Edward Cruz on 03/29/2020
//  Lab_7.5 --- Certificate_Of_Deposit.cpp

#include "Certificate_Of_Deposit.hpp"

#include <iostream>
#include <string>

//******* CONSTRUCTOR *************************************
Certificate_Of_Deposit::Certificate_Of_Deposit(string OwnerName = "", double StartBalance = 0.0, int ActBal = 0, int maturity = 6, double CDinterest = 0.006, int startMonth = 0) {
    Owner = OwnerName;
    Balance = StartBalance;
    Account_Number = ActBal;
    maturityMonths = maturity;
    interestRate = CDinterest;
    currentMonth = startMonth;
} //*******************************************************

// Create_Monthly_Statement() calculate interest and add it to balance
//^^ this is also commented in the hpp file.