#include<iostream>
using namespace std;

enum day{mon=1,tue,wed=5,thrus,fri,sat=9,sun};

int main(){
	day d;
	d=sat;
	if(d==sat){
		cout<<1;
	}
	return 0;
}
