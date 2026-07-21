#include "Customer.h"
#include <iostream>


bool testCustomer()
{
    Customer customer1("C00001", "Hussien", "1234");

    bool idTest = (customer1.getCustomerId() == "C00001");
    bool nameTest = (customer1.getName() == "Hussien");
    bool pinTest = (customer1.getPin() == "1234");

    return idTest && nameTest && pinTest;
   
}