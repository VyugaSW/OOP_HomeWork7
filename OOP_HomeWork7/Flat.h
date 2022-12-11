#pragma once
#include <Windows.h>
#include <iostream>
class Flat
{
	int square;
	int price;
public:
	Flat(int s, int p): square{ s }, price{ p } {};
	Flat() : Flat(1,100) {};
	bool operator==(Flat p) {
		return square == p.square ? 1 : 0;
	}
	void operator=(Flat p) {
		price = p.price;
		square = p.square;
	}
	bool operator>(Flat p) {
		return price > p.price ? 1 : 0;
	}
	bool operator<(Flat p) {
		return price < p.price < 0 ? 1 : 0;
	}

	int getPrice() {
		return price;
	}
	int getSquare() {
		return square;
	}
};

