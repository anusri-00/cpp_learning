#include<iostream>
using namespace std;

enum dept{cs=1,ece,it,civil};

int main(){
	dept d;
	d=cs;
	if(d==cs){
		cout<<1;
	}
	return 0;
}
