#include <iostream>
#include "Laptop.h"

using namespace std;

int main()
{
	CPU cpu1("cpu", 1, 11);
	GPU gpu1("gpu", 2, 22);
	SSD ssd1("ssd", 3, 33);
	RAM ram1("ram", 4, 44);

	Laptop laptop1("laptop1", "red", cpu1, ssd1, gpu1, ram1);
	laptop1.printLaptop();
	cout << "\nLaptop Count: " << Laptop::getLaptopCount() << endl;
}