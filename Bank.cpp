//
// Created by alexc on 9/5/2019.
//
#include <iostream>
#include "Bank.h"
using namespace std;

Bank::Bank(){

}

void Bank::deposit(double amount, string account) {

    if (account == "C"){
        checking += amount;
    }
    else if (account == "S"){
        saving += amount;
    }
    else {
        cout << "System error\n";
    }
}

void Bank::withdraw(double amount, string account) {
    if (account == "C"){
        if (checking < amount){
            cout << "Not enough balance to withdraw, current balance: " << checking << "\n";
        }
        else{
            checking -= amount;
        }
    }
    else if (account == "S"){

        if (saving < amount){
            cout << "Not enough balance to withdraw, current balance: " << saving << "\n";
        }
        else{
            saving -= amount;
        }
    }
    else {
        cout << "System error\n";
    }
}

void Bank::transfer(double amount, string account) {
    if(account == "C"){
        if(checking < amount){
            cout << "Not enough balance to transfer: current balance: " << checking << "\n";
        }
        else{
            checking -= amount;
            saving += amount;
        }
    }

    else if(account == "S"){
        if(saving < amount){
            cout << "Not enough balance to transfer. current balance: " << checking << "\n";
        }
        else{
            saving -= amount;
            checking += amount;
        }
    }

    else{
        cout << "System error\n";
    }
}

void Bank::print_balances() {
    cout << "Checking: " << checking << " and Saving: " << saving << "\n";
    cout << "\n";
}