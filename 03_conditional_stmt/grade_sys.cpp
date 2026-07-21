#include<iostream>
using namespace std;

int main(){
	int m1,m2,m3;
	cout<<"Enter marks of 3 subjects: ";
	cin>>m1>>m2>>m3;
	
	float avg=(m1+m2+m3)/3;
	cout<<endl<<"Average:"<<avg<<endl;
	if(avg>=75)
		cout<<"Grade A";
	else if(avg>=50 && avg <75)
		cout<<"Grade B";
	else if(avg>=35 && avg<50)
		cout<<"Grade C";
	else
		cout<<"Fail";
}
