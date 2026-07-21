#include<iostream>
using namespace std;

float Average(int l[],int n){
	float sum=0.0;
	for(int i=0;i<n;i++){
		sum+=l[i];
	}
	float avg=sum/n;
	return avg;
	
}

int main(){
	int a[]={20,28,40,53,68,84};
	int n=6;
	float res=Average(a,n);
	cout<<"Average: "<<res;
}
