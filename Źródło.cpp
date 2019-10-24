#include <iostream>

struct sprzedarz
{
	char *nazwa = new char;
	int sell, month_nr;
};

int main()
{
	int miesiace;
	std::cout << "napisz ile miesiecy: ";
	std::cin >> miesiace;
	sprzedarz * ksiazki = new sprzedarz[miesiace];
	for (int i = 0; i < miesiace; i++)
	{
		std::cout << "Nazwa: ";
		std::cin >> (ksiazki+i)->nazwa;
		std::cout <<"sprzedarz: ";
		std::cin >> ksiazki[i].sell;
		ksiazki[i].month_nr = i + 1;
	}
	for (int i = 0; i < miesiace; i++)
	{
		std::cout << "W " << (ksiazki+i)->month_nr << " miesiacu sprzedano " << (ksiazki+i)->sell << " " << ksiazki[i].nazwa << std::endl;
	}
	std::cin.get();
	std::cin.get();

	return 0;
}