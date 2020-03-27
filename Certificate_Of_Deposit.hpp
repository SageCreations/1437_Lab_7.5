//
//  Certificate_Of_Deposit.hpp
//  
//
//  Created by Bruce Gooch on 3/25/20.
//

#ifndef Certificate_Of_Deposit_h
#define Certificate_Of_Deposit_h

#include <stdio.h>
#include <string>

using namespace std;

class Certificate_Of_Deposit: public Bank_Account
{
private:
    int maturityMonths;
    double interestRate;
    int currentMonth;
public:
    Certificate_Of_Deposit(string, double, int, int, double, int);
    //Certificate_Of_Deposit(string OwnerName = "", double StartBalance = 0.0, int ActBal = 0, int maturity = 6, double CDinterest = 0.006, int startMonth = 0);
    // Create_Monthly_Statement() calculate interest and add it to balance
};

#endif /* Certificate_Of_Deposit_h */
