//
//  Checking_Account.hpp
//  
//
//  Created by Bruce Gooch on 3/25/20.
//

//  Edited by Edward Cruz on 03/29/2020.

#ifndef CHECKING_ACCOUNT_HPP
#define CHECKING_ACCOUNT_HPP

#include "Bank_Account.hpp"

#include <iostream>
#include <string>

using namespace std;

class Checking_Account: public Bank_Account
{
public:
    void writeCheck();
};

#endif /* Checking_Account_h */
