#include "IdGenerator.h"




// Constructor to initialize the counters for customer IDs and account numbers
IdGenerator::IdGenerator(int customerIdStart, int accountNumberStart)
	: customerIdCounter(customerIdStart),
	accountNumberCounter(accountNumberStart)
{}

// Function to convert an integer to a string with leading zeros to ensure it has a specified width
std::string IdGenerator::formatNumber(int number, int width)
{
	std::string numStr = std::to_string(number);
	while (numStr.length() < width)
	{
		numStr = "0" + numStr;
	}
	return numStr;
}
// Function to generate a unique customer ID by prefixing the counter with 'C' and formatting it to a width of 5 digits
std::string IdGenerator::generateCustomerId()
{
	std::string customerId = std::string("C") + formatNumber(customerIdCounter, 5);
	customerIdCounter++;
	return customerId;
}
//std::string IdGenerator::generateAccountNumber()
std::string IdGenerator::generateAccountNumber()
{
	std::string accountNumber = std::string("A") + formatNumber(accountNumberCounter, 5);
	accountNumberCounter++;
	return accountNumber;
}
