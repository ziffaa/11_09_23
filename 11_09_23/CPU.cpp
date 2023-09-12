#include "CPU.h"
#include <iostream>

using namespace std;

CPU::CPU()
{
	model = nullptr;
	price = 0;
	cores = 0;
}
CPU& CPU::operator= (CPU b)
{
	delete[] model;
	model = new char[strlen(b.model) + 1];
	strcpy_s(model, strlen(b.model) + 1, b.model);
	price = b.price;
	cores = b.cores;
	return *this;
}
CPU::CPU(const CPU& b)
{
	model = new char[strlen(b.model) + 1];
	strcpy_s(model, strlen(b.model) + 1, b.model);
	price = b.price;
	cores = b.cores;
}
CPU::CPU(const char* n)
{
	model = new char[strlen(n) + 1];
	strcpy_s(model, strlen(n) + 1, n);
}
CPU::CPU(const char* n, int c) :CPU(n)
{
	cores = c;
}
CPU::CPU(const char* n, int c, double p) :CPU(n, c)
{
	price = p;
}
void CPU::printCPU()
{
	cout << "CPU model: " << model << endl;
	cout << "CPU cores: " << cores << endl;
}
char* CPU::getModel()
{
	return model;
}
int CPU::getCores()
{
	return cores;
}
double CPU::getPrice()
{
	return price;
}
void CPU::setPrice(double p)
{
	price = p;
}
CPU::~CPU()
{
	delete[] model;
}