﻿/*
	Viết hàm nhập mảng một chiều các số nguyên
*/
#include <iostream>

using namespace std;

int main()
{
	int n;
	int a[100];
	cout << "Input n: ";
	cin >> n;

	for(int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]: ";
		cin >> a[i];
	}

	return 0;
}