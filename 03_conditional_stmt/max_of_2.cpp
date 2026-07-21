#include<iostream>
int max(int x,int y){
	if(x>y)
		return x;
	else
		return y;
}

int main(){
	int a=10,b=7,c;
	c=max(a,b);
	std::cout<<c;
	return 0;
}
