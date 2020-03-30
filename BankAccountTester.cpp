//
//  BankAccountTester.cpp
//  
//
//  Created by Bruce Gooch on 3/25/20.
//

//  Edited by Edward Cruz on 03/29/2020.

#include "Bank_Account.hpp"
#include "Checking_Account.hpp"

//Test These
#include "High_Interest_Checking.hpp"
#include "High_Interest_Savings.hpp"
#include "No_Service_Checking.hpp"
#include "Savings_Account.hpp"
#include "Certificate_Of_Deposit.hpp"
#include "Service_Charge_Checking.hpp"


#include <iostream>
#include <string>
using namespace std;


int main()
{
    High_Interest_Checking  HIC = High_Interest_Checking("James Smith", 8000.0, 1034, 0.005, 5000.0);
    High_Interest_Savings   HIS = High_Interest_Savings("John Adams", 3000.0, 1035, 0.004, 1500.0);
    No_Service_Checking     NSC = No_Service_Checking("Tyler Bo", 400.0, 1037, 0.002, 100.0);
    Savings_Account         SA  = Savings_Account("Connor Abrams", 2500.0, 1049, 0.003);
    Certificate_Of_Deposit  COD = Certificate_Of_Deposit("Todd Arnold", 400.0, 1089, 6, 0.006, 2);
    Service_Charge_Checking SCC = Service_Charge_Checking("Ryan Jones", 3010.0, 1020, 5, 5, 0);

    //*** TESTING HIGH_INTEREST_CHECKING ******************
    std::cout << "\n\n>> HIGH_INTEREST_CHECKING";
    HIC.Print_Customer_Statement();
    HIC.Create_Monthly_Statement();
    std::cout << "\n";
    HIC.Print_Customer_Statement();
    std::cout << "\n\n\n\n\n\n";

    //*** TESTING High_Interest_Savings *******************
    std::cout << ">> HIGH_INTEREST_SAVINGS";
    HIS.Print_Customer_Statement();
    HIS.Create_Monthly_Statement();
    std::cout << "\n";
    HIS.Print_Customer_Statement();
    std::cout << "\n\n\n\n\n\n";

    //*** TESTING No_Service_Checking *********************
    std::cout << ">> NO_SERVICE_CHECKING";
    NSC.Print_Customer_Statement();
    NSC.Create_Monthly_Statement();
    std::cout << "\n";
    NSC.Print_Customer_Statement();
    std::cout << "\n\n\n\n\n\n";

    //*** TESTING Savings_Account *************************
    std::cout << ">> SAVINGS_ACCOUNT";
    SA.Print_Customer_Statement();
    SA.Create_Monthly_Statement();
    std::cout << "\n";
    SA.Print_Customer_Statement();
    std::cout << "\n\n\n\n\n\n";

    //*** TESTING Certificate_Of_Deposit ******************
    std::cout << ">> CERTIFICATE_OF_DEPOSIT";
    COD.Print_Customer_Statement();
    COD.Create_Monthly_Statement();
    std::cout << "\n";
    COD.Print_Customer_Statement();
    std::cout << "\n\n\n\n\n\n";

    //*** TESTING Service_Charge_Checking *****************
    std::cout << ">> SERVICE_CHARGE_CHECKING";
    SCC.Print_Customer_Statement();
    SCC.Create_Monthly_Statement();
    std::cout << "\n";
    SCC.Print_Customer_Statement();
    
    return 0;
}

