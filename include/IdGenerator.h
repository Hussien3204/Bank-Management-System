#if !defined(IDGENERATOR_H)
#define IDGENERATOR_H

#include <string>
// Class to generate unique customer IDs and account numbers
class IdGenerator
{
private:
	int customerIdCounter;
	int accountNumberCounter;
	std::string formatNumber(int number, int width);
	// Helper function to format numbers with leading zeros
public:
	IdGenerator(int customerIdStart=1, int accountNumberStart=10000);
    std::string generateCustomerId();
    std::string generateAccountNumber();
};

#endif // IDGENERATOR_H