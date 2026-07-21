#include<iostream>
using namespace std;
float sum( int n){
	return (n*(n+1))/2;
}
int main(){
	int n;
	cout<<"Enter num : ";
	cin>>n;
	cout<<"sum:"<<sum(n);
	return 0;
}
