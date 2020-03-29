//
//  High_Interest_Checking.hpp
//  
//
//  Created by Bruce Gooch on 3/25/20.
//

//  Edited by Edward Cruz on 03/29/2020.

#ifndef High_Interest_Checking_hpp
#define High_Interest_Checking_hpp

#include "No_Service_Checking.hpp"

#include <iostream>
#include <string>

using namespace std;

class High_Interest_Checking: public No_Service_Checking
{
    private:
        double InterestRate;
        double MinimumBalance;
    public:
    High_Interest_Checking();
    High_Interest_Checking(string, double, int, double NoServiceInterest, double);
    
    //High_Interest_Checking(string OwnerName = "", double StartBalance = 0.0, int ActBal = 0, double NoServiceInterest = 0.005, double MinBal = 5000.0);
        // Create_Monthly_Statement() calculate interest and add it to balance
       // No interest if Month end balance is less than minimum balance
};

#endif /* High_Interest_Checking_h */
