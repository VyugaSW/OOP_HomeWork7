#pragma once

#include <Windows.h>
#include <iostream>
class Overcoat
{
	char* cloth;
	int price;
public:
	Overcoat(char* n, int p) 
		: cloth{ new char[125] }, price{ p }
	{
		cloth = n;
	};
	Overcoat() : Overcoat((char*)"NULL", 100) {};

	bool operator==(Overcoat p) {
		return strcmp(cloth, p.cloth) == 0 ? 1 : 0;
	}
	void operator=(Overcoat p) {
		price = p.price;
		cloth = p.cloth;
	}
	bool operator>(Overcoat p) {
		return price > p.price ? 1 : 0;
	}
	bool operator<(Overcoat p) {
		return price < p.price < 0 ? 1 : 0;
	}

	int getPrice() {
		return price;
	}
	char* getCloth() {
		return cloth;
	}
};

