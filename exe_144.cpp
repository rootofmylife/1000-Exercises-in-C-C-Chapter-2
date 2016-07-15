﻿/*
	Exe_144: Tìm "số nguyên tố đầu tiên" trong mảng 1 chiều các số nguyên. Nếu không có trả về -1
*/
#include <iostream>

using namespace std;

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

int Result(int a[], int n)
{
	for(int i = 1; i < n; i++)
	{
		if(Check(a[i]))
		{
			return a[i];
		}
	}
	return -1;
}

int main()
{
	int a[100];
	int n;	
	int kq = Result(a, n);
	cout << kq;

	return 0;
}