//  Created by Edward Cruz on 03/29/2020
//  Lab_7.5 --- Service_Charge_Checking.cpp

#include "Service_Charge_Checking.hpp"

#include <iostream>
#include <string>

//******* CONSTRUCTOR *************************************
Service_Charge_Checking::Service_Charge_Checking(std::string OwnerName = "", double StartBalance = 0.0, int ActBal = 0, int serviceFee = 5, int MaxCheckCount = 5, int CurrentChecks = 0) {
    Owner = OwnerName;
    Balance = StartBalance;
    Account_Number = ActBal; //This doesnt seem to be right but Account number is the only thing going up the heiarchy to fit.
    serviceCharge = serviceFee;
    MaxChecks = MaxCheckCount;
    CheckCount = CurrentChecks;
} //*******************************************************

//******* FUNCTIONS ***************************************
void Service_Charge_Checking::addCheckCount() {
    CheckCount++;
}

void Service_Charge_Checking::Create_Monthly_Statement() {
  Balance -= serviceCharge;
  CheckCount = 0;
} //*******************************************************
 //applys service charge and resets check count.

  