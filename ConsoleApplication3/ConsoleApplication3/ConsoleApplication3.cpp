#include "pch.h"
#include <stdio.h> 
#include <fstream> 
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian"); int num, a, b, n, k, m; int*A;
cout << "Введите a "; cin >> a;
cout << "Введите b>=a "; cin >> b;
cout << "Введите n "; cin >> n;
cout << "Введите k "; cin >> k;
A = (int*)malloc(n * sizeof(int));
for (int i = 0; i < n; i++)
{
	num = rand() % (b - a + 1) + a;
	A[i] = num;
}
for (int i = 0; i < n; i++) { cout << A[i] << " "; }
cout << endl;

for (int i = 0; i < n; i++)
{
	if (i % 2 == 1)
	{
		n++;
		m = A[i + 1];
		A[i + 1] = k;
		A[i + 2] = m;
		i++;
	}
}

for (int i = 0; i < n; i++)//вывод массива
	cout << A[i] << " ";
cout << endl;

free(A);
system("pause");
		}
