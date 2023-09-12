#include "GPU.h"
#include <iostream>

using namespace std;

GPU::GPU()
{
	model = nullptr;
	price = 0;
}
GPU::GPU(const GPU& b)
{
	model = new char[strlen(b.model) + 1];
	strcpy_s(model, strlen(b.model) + 1, b.model);
	price = b.price;
	vram = b.vram;
}
GPU &GPU::operator= (GPU b)
{
	delete[] model;
	model = new char[strlen(b.model) + 1];
	strcpy_s(model, strlen(b.model) + 1, b.model);
	price = b.price;
	vram = b.vram;
	return *this;
}
GPU::GPU(const char* n)
{
	model = new char[strlen(n) + 1];
	strcpy_s(model, strlen(n) + 1, n);
}
GPU::GPU(const char* n, int c) :GPU(n)
{
	vram = c;
}
GPU::GPU(const char* n, int c, double p) :GPU(n, c)
{
	price = p;
}
void GPU::printGPU()
{
	cout << "GPU model: " << model << endl;
	cout << "GPU VRAM (GB): " << vram << endl;
}
char* GPU::getModel()
{
	return model;
}
int GPU::getVram()
{
	return vram;
}
double GPU::getPrice()
{
	return price;
}
void GPU::setPrice(double p)
{
	price = p;
}
GPU::~GPU()
{
	delete[] model;
}
