#include "pch.h"
#include <iostream>
#include <fstream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;
void prim_vb(int a[], int n);
int main()
{
	setlocale(LC_ALL, "Russian");
	int choose;
	cout << "choose- ";
	cin >> choose;
		if (choose == 1) 
	{
			int* a;
			int i = 0, n, k = 0; ofstream fout; ifstream abc;
			abc.open("1.txt");
			while (!abc.eof())
			{
				abc >> n;
				if (n >= 0)
				{
					k++;
				}
			}
			abc.close();
			a = new int[k];
			abc.open("1.txt");
			while (i < k)
			{
				abc >> n;//ввод из массива в файл новую переменную для проверки положительности 
				if (n >= 0) { a[i] = n; i++; }
			}
			abc.close();
			prim_vb(a, k);
			for (int j = 0; j < k; j++)
			{
				cout << "a[" << j << "] = " << a[j] << endl;
			}
	}
		else if (choose == 2)
		{
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
            cout << "n" << endl;
			for (int j = 0; j < m+1; j++) //преобразование второго массива
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
		else 
		{ 
			cout << "choose 1 or 2"; 
	    }
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