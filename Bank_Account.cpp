//  Created by Edward Cruz on 03/29/2020
//  Lab_7.5 --- Bank_Account.cpp

#include "Bank_Account.hpp"
#include <iostream>
#include <string>


//******* CONSTRUCTOR *************************************
Bank_Account::Bank_Account() {
    std::string Owner = "";
    double Balance = 0.0;
    int Account_Number = 0;
} //*******************************************************

//******* COPY CONSTRUCTOR ********************************
Bank_Account::Bank_Account(std::string o, double b, int an) {
    Owner = o;
    Balance = b;
    Account_Number = an;
} //*******************************************************

//******* ACCESSORS ***************************************
std::string Bank_Account::Get_Name() {
    return Owner;
}

double Bank_Account::Get_Balance() {
    return Balance;
}

int Bank_Account::Get_Number() {
    return Account_Number;
} //*******************************************************

//******* FUNCTIONS ***************************************
void Bank_Account::Make_Deposit(double Deposit_Amount) {

}

bool Bank_Account::Can_Withdraw(double Withdraw_Amount) {

}

void Bank_Account::Make_Withdrawal(double Withdraw_Amount) {

}

void Bank_Account::Create_Monthly_Statement() {

}

void Bank_Account::Print_Customer_Statement() {

} //*******************************************************