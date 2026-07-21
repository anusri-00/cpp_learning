#include<iostream>
using namespace std;

int main(){
	
	int a,b,c;
	cout<<"Enter 2 numbers:";
	cin>>a>>b;
	
	cout<<"MENU:\n";
	cout<<"1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Remainder\n";
	
	int choice;
	
	cout<<"Enter your choice: ";
	cin>>choice;
	
	switch(choice){
		case 1:
			c=a+b;
			break;
		case 2:
			c=a-b;
			break;
		case 3:
			c=a*b;
			break;
		case 4:
			c=a/b;
			break;
		case 5:
			c=a%b;
			break;
		
		default:
			cout<<"Invalid";
	}
	cout<<endl<<c;
	
}
