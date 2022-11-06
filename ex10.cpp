#include<iostream>
using namespace std;
int main(){
	
	git remote add origin https://github.com/alnahdi1420/Cprogramming.git
git branch -M main
git push -u origin main
	for(int i=1;i<=6;i++){
		for(int y=1;y<=i;y++){
			cout<<"*  ";
		}cout<<endl;
	}cout<<endl;
	for(int i=1; i<=6; i++){
	for(int y=6; y>=i;y--){
	cout<<"*  ";	
	}cout<<endl;
	}
	
	
	
	
	
	return 0;
} 
