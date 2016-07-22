﻿/*
	Exe_212: Tính trung bình cộng các số dương trong mảng 1 chiều các số thực
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
	for(int i = 1; i < n; i++)
	{
		cout << a[i] << "      ";
	}
	cout << endl;
}

int Result(int a[], int n)
{
	int sum = 0;
	int dem = 0;
	for(int i = 0; i < n; i++)
	{
		if(a[i] > 0)
		{
			sum += a[i];
			dem++;
		}
	}
	return sum / dem;
}

int main()
{
	int a[100];
	int n;
	cout << "Input n: ";
	cin >> n;
	
	Input(a, n);
	Output(a, n);
	int kq = Result(a, n);
	cout << kq;
	
	return 0;
}