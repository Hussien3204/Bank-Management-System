#include "Account.h"

bool testAccount()
{
    Account account("A10000", 500);

    bool numberTest =
        (account.getAccountNumber() == "A10000");

    bool balanceTest =
        (account.getBalance() == 500);

    return numberTest && balanceTest;
}