﻿/*
	Exe_258: Sắp xếp các số nguyên tố trong mảng tăng dần. Các vị trí còn lại giữ nguyên
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

bool Check(int n)
{
	if(n == 2)
	{
		return true;
	}

	for(int i = 2; i < n; i++)
	{
		if(n % i == 0)
		{
			return false;
		}
	}
	return true;
}

void Swap(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

void Result(int a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		if(!Check(a[i]))
		{
			continue;
		}

		for(int j = i; j < n; j++)
		{
			if(Check(a[j]))
			{
				if(a[i] > a[j])
				{
					Swap(a[i], a[j]);
				}

			}
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
	Output(a, n);

	return 0;
}