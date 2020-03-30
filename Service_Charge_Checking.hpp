//  Created by Edward Cruz on 03/29/2020
//  Lab_7.5 --- Service_Charge_Checking.hpp
//  - this class was left in the checking account hpp file
//    so im just seperating it like how all the other files
//    are. Originaly Created by Bruce Gooch on 3/25/20.

#ifndef SERVICE_CHARGE_CHECKING_HPP
#define SERVICE_CHARGE_CHECKING_HPP

#include "Checking_Account.hpp"

class Service_Charge_Checking: public Checking_Account
{
protected:
    int serviceCharge;
    int MaxChecks;
    int CheckCount;
public:
    void addCheckCount();
    Service_Charge_Checking(string, double, int, int, int, int);
    //Service_Charge_Checking(string OwnerName = "", double StartBalance = 0.0, int ActBal = 0, int serviceFee = 5, int MaxCheckCount = 5, int CurrentChecks = 0);
    void Create_Monthly_Statement(); //applys service charge and resets check count.
};


#endif