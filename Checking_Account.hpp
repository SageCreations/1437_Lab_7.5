//
//  Checking_Account.hpp
//  
//
//  Created by Bruce Gooch on 3/25/20.
//

#ifndef Checking_Account_h
#define Checking_Account_h

#include <stdio.h>
#include <string>

using namespace std;

class Checking_Account: public Bank_Account
{
public:
    writeCheck();
};
class Service_Charge_Checking: public Checking_Account
{
private:
    int serviceCharge;
    int MaxChecks;
    int CheckCount;
public:
    void addCheckCount();
    Service_Charge_Checking(string, double, int, int, int, int);
    //Service_Charge_Checking(string OwnerName = "", double StartBalance = 0.0, int ActBal = 0, int serviceFee = 5, int MaxCheckCount = 5, int CurrentChecks = 0);
    // Create_Monthly_Statement() applys service charge and resets check count.
};

#endif /* Checking_Account_h */
