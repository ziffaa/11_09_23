#include "Laptop.h"
#include <iostream>

using namespace std;

int Laptop::laptopCount = 0;

Laptop::Laptop(const char* model, const char* color, const CPU&  cpu1, const SSD& ssd1, const GPU& gpu1, const RAM& ram1)
{
	this->model = new char[strlen(model) + 1];
	strcpy_s(this->model, strlen(model) + 1, model);

	this->color = new char[strlen(color) + 1];
	strcpy_s(this->color, strlen(color) + 1, color);

	this->cpu = cpu1;
	this->gpu = gpu1;
	this->ssd = ssd1;
	this->ram = ram1;

	price = cpu.getPrice() + ssd.getPrice() + gpu.getPrice() + ram.getPrice();

	laptopCount++;
}
Laptop::Laptop()
{
	model = nullptr;
	color = nullptr;
	price = 0;

	laptopCount++;
}
Laptop::Laptop(const Laptop& b)
{
	model = new char[strlen(b.model) + 1];
	strcpy_s(model, strlen(b.model) + 1, b.model);
	color = new char[strlen(b.color) + 1];
	strcpy_s(color, strlen(b.color) + 1, b.color);
	price = b.price;
	cpu = b.cpu;
	gpu = b.gpu;
	ram = b.ram;
	ssd = b.ssd;

	laptopCount++;
}
Laptop::~Laptop()
{
	delete[] model;
	delete[] color;

	laptopCount--;
}
void Laptop::printLaptop()
{
	cout << "Model: " << model << endl;
	cout << "Color: " << color << "\n\n";
	cpu.printCPU();
	cout << endl;
	gpu.printGPU();
	cout << endl;
	ssd.printSSD();
	cout << endl;
	ram.printRAM();
	cout << endl;
	cout << "Price: " << price << endl;
}

int Laptop::getLaptopCount()
{
	return laptopCount;
}