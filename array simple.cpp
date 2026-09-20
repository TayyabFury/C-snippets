#include<iostream>
using namespace std;

int main()
{
	int arr[5];
	
	for(int i=0;i<5;i++){
	cout<<"enter number in array"<<endl;
		cin>>arr[i];
	}
	cout<<endl;
		for(int i=0;i<5;i++){
		cout<<arr[i]<<" , ";
	}
	cout<<endl;
	cout<<arr[3];
}
