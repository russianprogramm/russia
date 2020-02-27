 #include "pch.h"
#include <stdio.h> 
#include <fstream> 
#include <iostream>
using namespace std;
void prim_vb(int a[], int n);
int main()
{
	setlocale(LC_ALL, "Russian");
	int* a;
	int i = 0, n, k = 0; ofstream fout; ifstream abc;
	abc.open("1.txt");
	while (!abc.eof())
	{
		abc >> n;
		if (n>= 0)
		{
			k++;
		}
	}
	abc.close();
	a = new int[k]; // динамический массив 
	abc.open("1.txt");
	while (i < k)
	{
		abc >> n;//ввод из массива в файл новую переменную для проверки положительности 
		if (n>= 0) { a[i] = n; i++; }
	}
	abc.close();
	prim_vb(a, k);
	for (int j = 0; j < k; j++)
	{
		cout << "a["<<j<<"] = " << a[j] << endl;
	}

	return 0;
}


void prim_vb(int a[], int n)
{
	int sw = 0, min, i;
	for (int j = 0; j < n; j++)
	{
		min = j; i = j + 1;
		for (i; i < n; i++)
		{
			if (a[i] < a[min]) min = i;
		}
		sw = a[min];
		a[min] = a[j];
		a[j] = sw;
	}
}