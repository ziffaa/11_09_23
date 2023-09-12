#include "CPU.h"
#include "SSD.h"
#include "GPU.h"
#include "RAM.h"
#include <iostream>

class Laptop
{
	CPU cpu;
	SSD ssd;
	GPU gpu;
	RAM ram;
	char* model;
	char* color;
	double price;
	static int laptopCount;
public:
	Laptop(const char*, const char*, const CPU&, const SSD&, const GPU&, const RAM&);
	Laptop();
	Laptop(const Laptop&);
	~Laptop();
	void printLaptop();
	static int getLaptopCount();
};
