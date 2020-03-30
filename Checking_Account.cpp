//  Created by Edward Cruz on 03/29/2020
//  Lab_7.5 --- Checking_Account.cpp

#include "Checking_Account.hpp"

#include <iostream>

//******* FUNCTIONS ***************************************
void Checking_Account::writeCheck() {
    double amount;
    char   more;
    do {
        std::cout << "How much will the check be: ";
        std::cin >> amount;
        if(Can_Withdraw(amount)) {
            Make_Withdrawal(amount);
            std::cout << "Your available balance after this check is $" << Balance;
            std::cout << "\n\t\tDo more (Y/N) : ";
            std::cin  >> more;
        } else {
            std::cout << "\n>> That exceeds your balance. Please try again.";
            more = 'n';
        }
    } while (more == 'N' || more == 'n');
} //*******************************************************