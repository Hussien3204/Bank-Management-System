#include <iostream>
#include "../include/Customer.h"
#include "../include/Account.h"



using namespace std;

int main()
{
    Account account("00012345", 1000.0);
	Customer customer1("C001", "John Doe", "1234");
	

    cout << "Account Number: " << account.getAccountNumber() << endl;
    cout << "Balance: " << account.getBalance() << endl;
	cout << "Customer ID: " << customer1.getCustomerId() << endl;
	cout << "Customer Name: " << customer1.getName() << endl;
	cout << "Customer PIN: " << customer1.getPin() << endl;

    return 0;
}