#include <iostream>

class CPU
{
	char* model;
	int cores;
	double price;
public:
	CPU();
	CPU(const char*);
	CPU(const CPU& b);
	CPU& operator= (CPU b);
	CPU(const char* n, int c);
	CPU(const char* n, int c, double p);
	void printCPU();
	char* getModel();
	int getCores();
	double getPrice();
	void setPrice(double p);
	~CPU();
};

