//do
// Created by alexc on 9/5/2019.
//

#include <iostream>
#include "Account.h"

using namespace std;

Account::Account(double i) : balance(i){
    balance = i;
    //cout << "Balance " << balance << "\n";
}

double Account::deposit(double i) {
    balance += i;
    //cout << "Deposit " << balance << "\n";
    return balance;
}

double Account::withdraw(double i) {
    if (i > balance){
        balance -= 20;
        cout << "Penalty -$20 " << "\n";
    } else {
        balance -= i;
        //cout << "Withdraw " << balance << "\n";
    }
    return balance;
}

double Account::get_balance() const {
    return balance;
}

double Account::set_balance(double i) {
    balance = i;
    return balance;
}

double Account::monthly(double i, double interest){
    double goal = i;
    interest = (interest / 100);
    int anually = 12;
    int month = 0;

    while (i <= goal * 2){
        i = i*(1 + interest/anually);
        month++;
        //cout << goal << "\n";
    }
    return month;
}