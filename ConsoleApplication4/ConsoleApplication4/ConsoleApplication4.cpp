#include "pch.h"
#include <stdio.h> 
#include <fstream> 
#include <iostream>
using namespace std;
void prim_vb(int a[], int n);
int main()
{
	setlocale(LC_ALL, "Russian");
	int choose;
	cout << "choose- " << endl;
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
			int num, a, b, n, k, m;
			cout << "Введите a "; cin >> a;
			cout << "Введите b>=a "; cin >> b;
			cout << "Введите n "; cin >> n;
			cout << "Введите k "; cin >> k;
			int* A = new int[n];
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
					n--;
					m = A[i + 1];
					A[i + 1] = k;
					A[i + 2] = m;
					i++;
				}
			}

			for (int i = 0; i < n; i++)//вывод массива
				cout << A[i] << " ";
			cout << endl;

			delete[]A;
			system("pause");
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