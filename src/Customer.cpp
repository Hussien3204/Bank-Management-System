#include "../include/Customer.h"




Customer::Customer(string id, string customerName, string customerPin)
{
	customerId = id;
	name = customerName;
	pin = customerPin;
}

string Customer::getPin()
{
	return pin;
}

string Customer::getName()
{
	return name;
}

string Customer::getCustomerId()
{
	return customerId;
}