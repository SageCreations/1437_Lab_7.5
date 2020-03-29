//
//  No_Service_Checking.hpp
//  
//
//  Created by Bruce Gooch on 3/25/20.
//

//  Edited by Edward Cruz on 03/29/2020.

#ifndef NO_SERVICE_CHECKING_HPP
#define NO_SERVICE_CHECKING_HPP

#include "Checking_Account.hpp"

#include <iostream>
#include <string>

using namespace std;

class No_Service_Checking: public Checking_Account
{
    private:
        double InterestRate;
        double MinimumBalance;
    public:
    No_Service_Checking();
    No_Service_Checking(string, double, int, double, double);
    //No_Service_Checking(string OwnerName = "", double StartBalance = 0.0, int ActBal = 0, double NoServiceInterst = 0.002, double MinBal = 100.0);
        // Create_Monthly_Statement() calculate interest and add it to balance
};

#endif /* No_Service_Checking_h */
