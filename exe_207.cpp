﻿/*
	Exe_207: Tính tổng các phần tử "cực trị" trong mảng. Một phần tử dc gọi là cực trị khi nó lớn hơn hoặc nhỏ hơn các phần tử xung quanh nó.
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
	for(int i = 1; i < n - 1; i++)
	{
		if((a[i] > abs(a[i + 1]) && a[i] > a[i - 1]) || (a[i] < abs(a[i + 1]) && a[i] < a[i - 1]))
			sum += a[i];
	}
	return sum;
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