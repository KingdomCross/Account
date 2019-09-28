//
// Created by alexc on 9/5/2019.
//

#ifndef ACCOUNT_ACCOUNT_H
#define ACCOUNT_ACCOUNT_H

using namespace std;

class Account {

    double balance = 0;

public:

    Account(double i);

    double deposit(double i);

    double withdraw(double i);

    double get_balance() const;

    double set_balance() const;

    double set_balance(double i);

    double monthly(double investment, double interest);
};


#endif //ACCOUNT_ACCOUNT_H
