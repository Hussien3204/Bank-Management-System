#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>

using namespace std;

class Account
{
private:

    string accountNumber;
    double balance;


public:

    Account(string number, double initialBalance);

    string getAccountNumber();
    double getBalance();
};

#endif