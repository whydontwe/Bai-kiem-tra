#include<iostream>

using namespace std;

int main()
{
	int a[20];
	int max;
	int min;
	int b;
	int c;
	cout<<"Nhap vao 20 so "<<" "<<endl;
	for(int i=0;i<20;i++)
	{
	cin>>a[i];
	}
	
	//So lon nhat
	
	cout<<"so lon nhat la:";
	max=a[1];
	for(int i=0;i<20;i++)
	if(a[i]>max)
	 max=a[i];
    cout<<max;
    
    cout<<endl;
    
    //so nho nhat
    
    cout<<"So nho nhat la:";
    
    min=a[2];
    for(int i=0;i<20;i++)
    if(a[i]<min)
	 min=a[i];
    cout<<min;
    
    cout<<endl;
	
	//Tu lon den nho
	
	cout<<"sap xep tu lon den nho:";
	
	for(int i=0;i<20;i++)
	{
		for(int j=0;j<20;j++)
		if(a[i]>a[j])
			{
			b=a[i];
			a[i]=a[j];
			a[j]=b;
		}
	}
	for(int i=0;i<20;i++)
	cout<<"  "<<a[i];
	
	 cout<<endl;
	
	//câu d
	
	cout<<"sap xep tu nho den lon:";
	
	for(int i=0;i<20;i++)
	{
	for(int j=0;j<20;j++)
		if(a[i]<a[j])
		{
			c=a[i];
			a[i]=a[j];
			a[j]=c;
		}
	}
	for(int i=0;i<20;i++)
	cout<<"  "<<a[i];

}
