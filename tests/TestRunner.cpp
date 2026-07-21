
#include <iostream>

bool testIdGenerator();
bool testCustomer();
bool testAccount();

int main()
{
    bool result = testIdGenerator();

    if (result)
    {
        std::cout << "IdGenerator Test: PASS" << std::endl;
    }
    else
    {
        std::cout << "IdGenerator Test: FAIL" << std::endl;
    }
    
    return 0;
}

