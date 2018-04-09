#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <math.h>
using namespace std;

int soNguyenTo(int soA)
{
	if (soA < 2) 
	{
		return 0;
	}
	else if (soA>2)
	{
		if (soA % 2 == 0)
		{
			return 0;
		}
		for (int i = 3; i <= sqrt((float)soA); i += 2)
		{
			if (soA%i == 0)
			{
				return 0;
			}
		}
	}
	return 1;
}
int main()
{
	int n;
	cout << "Nhap so can kiem tra?!" << endl;
	cin >> n;
	if (soNguyenTo(n) == 1)
	{
		cout << "So " << n << " la so nguyen to";
	}
	else
	{
		cout << "So " << n << " khong phai nguyen to";
	}
	return 0;
}
