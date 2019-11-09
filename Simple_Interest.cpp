
#include <iostream>

using namespace std;


int main()

{

	float p,r,t,i;    // variables

	cout<<"Enter Principle Amount :";

	cin>>p;

	cout<<"Enter Rate :";

	cin>>r;

	cout<<"Enter Time :";

	cin>>t;

	i=(p*r*t)/100;    // formula for solving simple interest

	cout<<"Simple Interest :"<<i;

	return 0;

}

