#include "pch.h"
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
 
void main()
{
	setlocale(LC_ALL, "Russian");
	int num, a, b, n, k, m;
	cout << "Vvedite a="; cin >> a;
	cout << "vvedite b>=a"; cin >> b;
	cout << "Vvedite n="; cin >> n;
	cout << "Vvedite k="; cin >> k;
	int *A1; int *A2;
	A1 = (int *)malloc(sizeof(int)*n);
	A2 = A1;
	for (int i = 0; i < n; i++)
	{
		num = rand() % (b - a + 1) + a;
		A1[i] = num;
	}
	for (int i = 0; i < n; i++) { cout << A1[i] << " "; }
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		if (i % 2 == 1)
		{
			n++;
			m = A1[i + 1];
			A1[i + 1] = k;
			A1[i + 2] = m;
		}
	}
	A2 = (int *)realloc(A1, n * sizeof(int));
	for (int i = 0; i < n; i++)//вывод массива
	{
		cout << A2[i] << " ";
	cout << endl;
}
	_getch();
}