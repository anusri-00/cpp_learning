#include<iostream>
using namespace std;
float area(int base,int height){
	return (float)((base*height)/2);
}
int main(){
	int base,height;
	cout<<"Enter base and height:";
	cin>>base>>height;
	cout<<"Area:"<<area(base,height);
	return 0;
}
