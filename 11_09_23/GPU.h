#include <iostream>

class GPU
{
	char* model;
	int vram;
	double price;
public:
	GPU();
	GPU(const GPU& b);
	GPU& operator=(GPU b);
	GPU(const char*);
	GPU(const char* n, int c);
	GPU(const char* n, int c, double p);
	void printGPU();
	char* getModel();
	int getVram();
	double getPrice();
	void setPrice(double p);
	~GPU();
};


