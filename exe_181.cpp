﻿/*
	Exe_181: Cho mảng 1 chiều các số nguyên. Hãy liệt kê các giá trị chẵn có ít nhất 1 lân cận cũng là giá trị chẵn
*/
#include <iostream>
#include <cmath>

using namespace std;

void Input(int a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]: ";
		cin >> a[i];
	}
}

void Output(int a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		cout << a[i] << "      ";
	}
	cout << endl;
}

void Result(int a[], int n)
{
	if(a[0] % 2 == 0 && a[1] % 2 == 0)
	{
		cout << a[0] << "\t";
	}
	if(a[n - 1] % 2 == 0 && a[n - 2] % 2 == 0)
	{
		cout << a[n - 1] << "\t";
	}
	for(int i = 1; i < n - 1; i++)
	{
		if((a[i + 1] % 2 == 0 || a[i - 1] % 2 == 0) && a[i] % 2 == 0)
		{
			cout << a[i] << "\t";
		}
	}
}

int main()
{
	int a[100];
	int n;
	cout << "Input n: ";
	cin >> n;
	
	Input(a, n);
	Output(a, n);
	Result(a, n);
	
	return 0;
}