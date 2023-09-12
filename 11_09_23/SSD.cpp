#include "SSD.h"
#include <iostream>

using namespace std;

SSD::SSD()
{
	model = nullptr;
	price = 0;
	capacity = 0;
}
SSD::SSD(const char* n)
{
	model = new char[strlen(n) + 1];
	strcpy_s(model, strlen(n) + 1, n);
}
SSD& SSD::operator= (SSD b)
{
	delete[] model;
	model = new char[strlen(b.model) + 1];
	strcpy_s(model, strlen(b.model) + 1, b.model);
	price = b.price;
	capacity = b.capacity;
	return *this;
}
SSD::SSD(const SSD& b)
{
	model = new char[strlen(b.model) + 1];
	strcpy_s(model, strlen(b.model) + 1, b.model);
	price = b.price;
	capacity = b.capacity;
}
SSD::SSD(const char* n, int c) :SSD(n)
{
	capacity = c;
}
SSD::SSD(const char* n, int c, double p) :SSD(n, c)
{
	price = p;
}
void SSD::printSSD()
{
	cout << "SSD model: " << model << endl;
	cout << "SSD capacity (GB): " << capacity << endl;
}
char* SSD::getModel()
{
	return model;
}
int SSD::getCapacity()
{
	return capacity;
}
double SSD::getPrice()
{
	return price;
}
void SSD::setPrice(double p)
{
	price = p;
}
SSD::~SSD()
{
	delete[] model;
}