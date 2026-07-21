//short circuit

#include<iostream>
using namespace std;
/*
int main(){
	int a=10,b=5,i=5;
	if(a>b&& ++i<=b){
		
	}
	cout<<i<<endl; //op:6
}*/

int main(){
	int a=10,b=5,i=5;
	if(a<b&& ++i<=b){//here a<b is false so it doesnt check the next one so ++i will never be done
		
	}
	cout<<i<<endl;//op:5
}
//same with or
