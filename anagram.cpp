#include<bits/stdc++.h>
using namespace std;


int main(){
	int n;
	cin>>n;
	
	int sum =0;
	int orgi=n;
	while(n>0){
		int lstdigit = n%10;
		sum = sum + pow(lstdigit,3);
		n = n/10;
	}
	if(sum == orgi){
		cout<<"yes"<<endl;
	}
	else{
		cout<<"not"<<endl;
	}
	
	return 0;
}
