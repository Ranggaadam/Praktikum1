#include <iostream>

int main()
{
	int nilai, hasil;

	std::cout << "masukan nilai : ";
	std::cin >>nilai;
	hasil = nilai%2;
	std::cout << hasil << std::endl;

	if (hasil==0)
		std::cout << "genap";
	else
		std::cout << "ganjil";
	return 0;
}
