#include "pch.h"
#include <iostream>
#include <fstream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

void main()
{

	setlocale(LC_ALL, "Russian");
	int  a, b, n, k, m = 0;
	cout << "Vvedite a="; cin >> a;
	cout << "vvedite b>=a"; cin >> b;
	cout << "Vvedite n="; cin >> n;
	cout << "Vvedite k="; cin >> k;
	srand(time(NULL));
	int* A = new int[n];
	for (int f = 0; f < n; f++)
	{
		A[f] = rand() % (b - a + 1) + a;//создание первого массива
		cout << A[f] << endl;
		if (A[f] % 2 != 0)
		{
			m++;
		}
	}
	m += n;
	int* A2 = new int[m];
	int mass_rem = 0;

	cout << "n"<<endl;
	for (int j = 0; j < m; j++) //преобразование второго массива
	{
		A2[j] = A[mass_rem];
		if (j % 2 != 0)
		{
			A2[j] = A[mass_rem];
			A2[j + 1] = k;
			j++;
		}
		mass_rem++;
	}
	for (int j = 0; j < m+1; j++)
	{
		cout << j << "     " << A2[j] << endl;
	}
	delete[] A;
	delete[] A2;
}
