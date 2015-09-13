#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	int sum=0;
	int number=a;
	int num=b;
	cout<<"Please give me the lower number"<<endl;
	cin>>number;
	
	cout<<"Please give me the upper number"<<endl;
	cin>>num;
	
	
	if(number>num){
		cout<<"You use a lower number not an upper, try again"<<endl;
	
	}
	
	while(number<=num){
		sum=sum+number;
		number++;
		
	}		
		
	
	cout<<"Your sum is = "<<sum<<endl;
	
	
	return 0;
}