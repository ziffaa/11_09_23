#include "RAM.h"


using namespace std;

RAM::RAM()
{
	model = nullptr;
	price = 0;
	amount = 0;
}
RAM::RAM(const RAM& b) 
{
	model = new char[strlen(b.model) + 1];
	strcpy_s(model, strlen(b.model) + 1, b.model);
	price = b.price;
	amount = b.amount;
}
RAM& RAM::operator= (RAM b)
{
	delete[] model;
	model = new char[strlen(b.model) + 1];
	strcpy_s(model, strlen(b.model) + 1, b.model);
	price = b.price;
	amount = b.amount;
	return *this;
}
RAM::RAM(const char* n)
{
	model = new char[strlen(n) + 1];
	strcpy_s(model, strlen(n) + 1, n);
}
RAM::RAM(const char* n, int c) :RAM(n)
{
	amount = c;
}
RAM::RAM(const char* n, int c, double p) :RAM(n, c)
{
	price = p;
}
void RAM::printRAM()
{
	cout << "RAM model: " << model << endl;
	cout << "RAM amount (GB): " << amount << endl;
}
char* RAM::getModel()
{
	return model;
}
int RAM::getAmount()
{
	return amount;
}
double RAM::getPrice()
{
	return price;
}
void RAM::setPrice(double p)
{
	price = p;
}
RAM::~RAM()
{
	delete[] model;
}