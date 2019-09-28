//
// Created by alexc on 9/5/2019.
//

#ifndef ACCOUNT_BANK_H
#define ACCOUNT_BANK_H

#include <iostream>
#include "Account.h"

using namespace std;

class Bank {

    double checking = 0;
    double saving = 0;
    string account = "Null ";

public:
    Bank();
    void deposit(double amount, string account);
    void withdraw(double amount, string account);
    void transfer(double amount, string account);
    void print_balances();
};


#endif //ACCOUNT_BANK_H
