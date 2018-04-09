#include <iostream>

using namespace std;



int Giaithua(int a)
{
	int x;
	int gt = 1;
     for (x = 1; x <= a; x++)
     {
         gt*=x;
     }
    return gt;
}
main()
{
	int b;
	cout << "Nhap vao 1 so: ";
	cin >> b;
	cout <<"Giai thua cua " << b <<" la: "<<Giaithua(b);
}
