#include "../include/Account.h"


Account::Account(string number, double initialBalance)
{
    accountNumber = number;
    balance = initialBalance;
}


string Account::getAccountNumber()
{
    return accountNumber;
}


double Account::getBalance()
{
    return balance;
}