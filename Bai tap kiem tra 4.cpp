#include <iostream>

using namespace std;

main()
{
	int a;
	int x, y, z;
	cout<<"Nhap vao so có 4 chu so: ";
	cin >> a;
	x = a;
	z = a % 10;
	if (a<10000 && a>999)
	{
	while(a)
	{
		x = a / 10;
		y = x % 10;
		a = x;
		if (z < y)
		z = y;
	}
	cout << "So lon nhat la : " <<z;
	}
	else
	{
		cout<<"Ban phai nhap so co 4 chu so";
	}
}

