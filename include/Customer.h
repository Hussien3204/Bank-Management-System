#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>

using namespace std;

class Customer
{
private:

    string customerId;
    string name;
    string pin;


public:

    Customer(string id, string customerName, string customerPin);

    string getCustomerId();
    string getName();
    string getPin();
};

#endif