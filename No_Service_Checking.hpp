//
//  No_Service_Checking.hpp
//  
//
//  Created by Bruce Gooch on 3/25/20.
//

#ifndef No_Service_Checking_hpp
#define No_Service_Checking_hpp

#include <stdio.h>
#include <string>

using namespace std;

class No_Service_Checking: public Checking_Account
{
    private:
        double InterestRate;
        double MinimumBalance;
    public:
    No_Service_Checking(string, double, int, double, double);
    //No_Service_Checking(string OwnerName = "", double StartBalance = 0.0, int ActBal = 0, double NoServiceInterst = 0.002, double MinBal = 100.0);
        // Create_Monthly_Statement() calculate interest and add it to balance
};

#endif /* No_Service_Checking_h */
