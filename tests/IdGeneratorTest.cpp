#include "IdGenerator.h"

#include <iostream>

bool testIdGenerator()
{
    IdGenerator idGen(1, 1000);

    std::string customerId1 = idGen.generateCustomerId();
    std::string customerId2 = idGen.generateCustomerId();

    std::string accountNumber1 = idGen.generateAccountNumber();
    std::string accountNumber2 = idGen.generateAccountNumber();

    std::cout << "Customer 1: " << customerId1 << std::endl;
    std::cout << "Customer 2: " << customerId2 << std::endl;

    std::cout << "Account 1: " << accountNumber1 << std::endl;
    std::cout << "Account 2: " << accountNumber2 << std::endl;


    bool customerIdTest =
        (customerId1 == "C00001" &&
            customerId2 == "C00002");

    bool accountNumberTest =
        (accountNumber1 == "A10000" &&
            accountNumber2 == "A10001");


    std::cout << "Customer Test: "
        << (customerIdTest ? "PASS" : "FAIL")
        << std::endl;

    std::cout << "Account Test: "
        << (accountNumberTest ? "PASS" : "FAIL")
        << std::endl;


    return customerIdTest && accountNumberTest;
}

