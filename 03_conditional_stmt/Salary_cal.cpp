#include<iostream>
using namespace std;

int main(){
	float basicSalary,percentAllowance,percentDeduction;
	float net;
	
	cout<<"Enter basic salary,percent of Allowance,percent of deduction";
	cin>>basicSalary>>percentAllowance>>percentDeduction;
	
	net=basicSalary+basicSalary*percentAllowance/100-basicSalary*percentDeduction/100;
	
	cout<<"Netsalary: "<<net;
}
