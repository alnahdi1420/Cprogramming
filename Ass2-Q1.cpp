#include<iostream>
using namespace std;
int main(){
	
	const int NUMGRADES=4;
	const int NUMSTUDENT=20;
	int i,j;
	double grade, total, average;
	for(i=1;i<=NUMSTUDENT;i++){
		total=0;
		for(j=1;j<=NUMGRADES;j++){
			
			cout<<" Enter a grade for this student";
			cin>>grade;
			total=total+grade;
			
		}average=total/NUMGRADES;
		cout<<"\n the average for student "<<i<<" is "<<average<<"\n\n";
	}
	
	
	
	
	
	
	
	
	return 0;
}
