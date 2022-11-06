#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	
	cout<<setw(10)<<"Euro"<<setw(15)<<"Dollar"<<endl;
	int a=1;
	double c;
	for(a=1; a<=5;a++){
		c=a*1.15;
		cout<<setw(8)<<a<<setw(16)<<fixed<<setprecision(2)<<c<<endl;
	}
	
	
	
	
	
	
	return 0;
}
