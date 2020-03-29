//
//  Bank_Account.hpp
//  
//
//  Created by Bruce Gooch on 3/25/20.
//

//  Edited by Edward Cruz on 03/29/2020.

#ifndef BANK_ACCOUNT_HPP
#define BANK_ACCOUNT_HPP

#include <iostream>
#include <string>

using namespace std;

class Bank_Account
{
protected:
    string Owner;       // Varible to store the Account Owners name.
    double Balance;     // Varible to hold the Account Balance.
    int Account_Number; // Varible to hold Account Number.
public:
    Bank_Account();
    Bank_Account(string, double, int);
    //Bank_Account(string OwnerName = "", double StartBalance = 0.0, Account = 0);
    
    string Get_Name();
    double Get_Balance();
    int Get_Number();
    
    void Make_Deposit(double Deposit_Amount);
    bool Can_Withdraw(double Withdraw_Amount); // check balance first
    void Make_Withdrawal(double Withdraw_Amount);
    void Create_Monthly_Statement();
    void Print_Customer_Statement();// Prints the customer statement
    
};

#endif /* Bank_Account_hpp */
