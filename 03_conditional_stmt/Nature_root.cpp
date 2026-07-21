#include<iostream>
using namespace std;

int main(){
	
	int a,b,c;
	cout<<"Enter coefficents (ax^2+bx+c=0): ";
	cin>>a>>b>>c;
	int det= b*b-4*a*c;
	cout<<endl<<"Determinant of "<<a<<"x^2 "<<b<<"x "<<c<<"=0 : "<<det;
	if(det=0){
		cout<<endl<<"Roots are real and equal";
	}
	else if(det>0)
		cout<<endl<<"Roots are real and unequal";
	else
		cout<<endl<<"roots are Imaginary";
}
