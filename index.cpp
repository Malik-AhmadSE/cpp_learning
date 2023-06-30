// switch statement 

/// if 
/// else if 
//// else if 

////.....
/// else 

//////////////////////////// switch statement /////////////

/////  case 1, case 2 ,case 3, case 4

////// syntax 

#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"1. for opening jazz tune \n 2.for closing jazz tune ";
	cin>>n;
	switch(n){
		case 1:
			cout<<"jazz tune open";
			break;
		case 2:
			cout<<"jazz tune close";
			break;
		default:
			cout<<"No choice is selected";
			break;			
	}
}



