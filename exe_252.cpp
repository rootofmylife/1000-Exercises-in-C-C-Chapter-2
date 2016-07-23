﻿/*
	Exe_252: Định nghĩa mảng gọi là "dạng sóng" khi phần tử trị số i lớn hơn hoặc nhỏ hơn 2 phần tử xung quanh nó. Viết hàm kt
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

int Result(int a[], int n)
{
	for(int i = 1; i < n - 1; i++)
	{
		if(!((a[i] > a[i - 1] && a[i] > a[i + 1]) || (a[i] < a[i -1] && a[i] < a[i + 1])))
		{
			return 0;
		}
	}
	return 1;
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