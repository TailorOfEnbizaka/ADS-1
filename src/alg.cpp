// Copyright 2022 NNTU-CS
#include <iostream>
#include <cstdint>
#include "alg.h"

using namespace std;

bool checkPrime(uint64_t value) {
	// вставьте код функции
	int d = 1;
	for (int i = 1; i <= value / 2; i++)
		if (value % i == 0)
			d++;
	if (d > 2)
		return false;
	else
		return true;
}

uint64_t nPrime(uint64_t n) {
	// вставьте код функции
	int d, a=0;
	int mas[100];
	for (int i = 2; i < 100; i++)
	{
		d = 1;
		for (int j = 1; j <= i / 2; j++)
			if (i % j == 0)
				d++;
		if (d == 2)
		{
			mas[a] = i;
			a++;
		}
	}
	return mas[n-1];
}

uint64_t nextPrime(uint64_t value) {
	// вставьте код функции
	int d;
	for (int i = value + 1; i < value + 100; i++)
	{
		d = 1;
		for (int j = 1; j <= i / 2; j++)
			if (i % j == 0)
				d++;
		if (d == 2)
			return i;
	}
}

uint64_t sumPrime(uint64_t hbound) {
	// вставьте код функции
	int d, s = 0;
	for (uint64_t i = 2; i < hbound; i++)
	{
		d = 1;
		for (int j = 1; j <= i / 2; j++)
			if (i % j == 0)
				d++;
		if (d == 2)
			s += i;
	}
	return s;
}

int main()
{
	uint64_t value;
	uint64_t n;
	uint64_t hbound;
	cin >> value;
	cout<<checkPrime(value)<<endl;
	cin >> n;
	cout << nPrime(n) << endl;
	cin >> value;
	cout << nextPrime(value) << endl;
	cin >> hbound;
	cout << sumPrime(hbound) << endl;
}
