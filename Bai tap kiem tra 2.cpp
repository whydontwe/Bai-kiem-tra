#include <iostream>
#include <math.h>

using namespace std;

main()
{
	int a[20] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
	int Tong;
	
//In ra tu 1-->20
cout<<"Tu 1-->20: ";
		for (int i=0; i<20; i++)
		{
			cout << a[i]<<" ";
		}
	cout<<endl;
	
	
//In ra tu 20-->1
cout<<"Tu 20-->1: ";
		for (int i1=19; i1>=0; i1--)
		{
			cout << a[i1]<<" ";
		}
	cout<<endl;
	
	
//In ra cac so chan tu 1-->20
cout<<"So chan tu 1-->20: ";
		for(int i2=1; i2<20 ; i2+=2 )
		{
			cout<< a[i2]<<" ";
		}
	cout<<endl;
	
	
//In ra cac so le tu 1-->20
cout<<"So le tu 1-->20: ";
		for(int i3=0; i3<20 ; i3+=2 )
		{
			cout<< a[i3]<<" ";
		}
	cout<<endl;

//in ra cac so nguyen to tu 1-->20
cout<<"so nguyen to tu 1-->20: ";
		for(int i4=0; i4<20; i4++)
        	for (int j=2; j*j<=i4; j++)
        	{
            if (i4 % j == 0)
                break;
            else if (j+1 > sqrt(i4)) {
                cout << i4 <<" ";
            }
       		}
	cout<<endl;

//In ra tong tu 1-->20
cout<<"Tong tu 1-->20: ";
		for(int i5=0; i5<20;i5++)
		{
			Tong+=a[i5];
		}
		cout<<Tong;
	cout<<endl;
}
		
		
		
		
