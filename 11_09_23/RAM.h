#include <iostream>

class RAM
{
	char* model;
	int amount;
	double price;
public:
	RAM();
	RAM(const RAM& b);
	RAM(const char*);
	RAM(const char* n, int c);
	RAM(const char* n, int c, double p);
	RAM& operator= (RAM b);
	void printRAM();
	char* getModel();
	int getAmount();
	double getPrice();
	void setPrice(double p);
	~RAM();
};

