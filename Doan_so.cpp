#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main (){
	
	int a, b, c=0, Max=100, Min=1;
    srand(time(NULL));
    b = (rand()%(Max - Min + 1)) + Min;
    cout<<"Tro choi doan so da bat dau!!!"<<endl;

    do
{
	cout <<"Ban hay doan 1 so: ";
    cin>>a;                                            
    if (a > b)
	{
		cout<<"So ban vua nhap lon hon so bi mat"<<endl;
   		c++;
   		cout<<endl;
	}

    else if (a < b)
	{
    	cout<<"So ban vua nhap nho hon so bi mat"<<endl;
    	c++;
		cout<<endl;
	}
	
    else if (a==b){
    	cout<<"Chuc mung ban da tim duoc so bi mat: " <<endl <<"So bi mat la: " <<b<< endl << "so lan doan so bi mat cua ban la: "<<c;
    }
}	
while (a!=b);
{
	cout<<"Rat tiec ban chua tim duoc so bi mat" <<endl << "So bi mat la: " <<endl <<"So bi mat la: " <<b<< endl << "so lan doan so bi mat cua ban la: "<<c;
}
}








