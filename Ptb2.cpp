#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <math.h>
using namespace std;

float a,b,c,d;
void Nhap()
{
	cout<<"Nhap vao A: "; cin >> a;
	cout<<"Nhap vao B: "; cin >> b;
	cout<<"Nhap vao C: "; cin >> c;
}
void Ptb2()
{
	if(a==0)
	{
		if(b==0)
		{
			if(c==0)
				cout<<"Phuong trinh vo so nghiem";
			else
				cout<<"Phuong trinh vo nghiem";
		}		
	}
	else
	{
	d=b*b-4*a*c;
	if(d<0)
		cout<<"Phuong trinh vo nghiem";
	if(d==0)
		cout<<"Phuong trinh co nghiem X la: "<< -b/(2*a);
	if(d>0)
		cout << "Phuong trinh co 2 nghiem:"<<endl;
		cout << "X1= "<<(-b+sqrt(d))/(2*a)<<endl<<"X2="<<(-b-sqrt(d))/(2*a);
	}
}

main()
{
	Nhap();
	Ptb2();
	return 0;
}
