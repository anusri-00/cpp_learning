//switch
//branch & ctrl stmt

#include<iostream>
using namespace std;

int main(){
	int day;
	cout<<"Enter day: ";
	cin>>day;
	
	switch(day){
		case 1:
			cout<<endl<<"Monday";
			break;
		case 2:
			cout<<endl<<"tuesday";
			break;
		case 3:
			cout<<endl<<"wededday";
			break;
		case 4:
			cout<<endl<<"thrusday";
			break;
		case 5:
			cout<<endl<<"friday";
			break;
		case 6:
			cout<<endl<<"satday";
			break;
		case 7:
			cout<<endl<<"sunday";
			break;
		default:
			cout<<"Invalid";
	}
}
