#include <iostream>

using namespace std;

main()
{
	string a;
	float toan, ly, hoa;
	cout<<"Nhap ten SV: ";
	cin >> a;
	cout<<"Nhap diem mon Toan: ";
	cin>>toan;
	cout<<"Nhap diem mon Ly: ";
	cin>>ly;
	cout<<"Nhap diem mon Hoa: ";
	cin>>hoa;
	float tb;
	tb=(toan+ly+hoa)/3;
	cout <<tb;
	
	if(tb>=8)
	{
		cout<<"Ten Sv: "<<a<<endl<<"Diem trung binh: "<<tb<<endl<<"Xep loai: Xuat Sac";
	}
	else if(tb>=7)
	{
		cout<<"Ten Sv: "<<a<<endl<<"Diem trung binh: "<<tb<<endl<<"Xep loai: Gioi";
	}
	else if(tb>=6)
	{
		cout<<"Ten Sv: "<<a<<endl<<"Diem trung binh: "<<tb<<endl<<"Xep loai: Kha";
	}
	else if(tb>=5)
	{
		cout<<"Ten Sv: "<<a<<endl<<"Diem trung binh: "<<tb<<endl<<"Xep loai: Trung Binh";
	}
	else if(tb<5)
	{
		cout<<"Ten Sv: "<<a<<endl<<"Diem trung binh: "<<tb<<endl<<"Xep loai: Yeu";
	}
}
