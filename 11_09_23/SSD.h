#include <iostream>

class SSD
{
	char* model;
	int capacity;
	double price;
public:
	SSD();
	SSD(const char* n);
	SSD(const char* n, int c);
	SSD(const char* n, int c, double p);
	SSD(const SSD& b);
	SSD& operator= (SSD b);
	void printSSD();
	char* getModel();
	int getCapacity();
	double getPrice();
	void setPrice(double p);
	~SSD();
};





