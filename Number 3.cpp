#include <iostream>
using namespace std;

int main()
{
	int num[5];
	int *ptr =num; 
	
	cout<<"Please put 5 integers: "<< endl;
	cin>>num[0]>>num[1]>>num[2]>>num[3]>>num[4];
	
	cout<<"Your input number are: "<< endl;
	for(int i = 0;i < 5; i++)
	{
		cout<< *ptr << endl;
		ptr++;
	} 

}
