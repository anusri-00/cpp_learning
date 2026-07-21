#include<iostream>
using namespace std;

int main(){
	int a=10,b=5;
	int c=a+b;
	if(c>0){
		
	}
	cout<<c; // 15
	//scope of c 
	{
		int d=a+b;
		if(d>0){
			
		}
	}
	//cout<<d;//error
	//if(int e=a+b;e>10){ } - from cpp 12
}
