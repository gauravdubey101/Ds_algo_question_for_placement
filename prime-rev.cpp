#include<bits/stdc++.h>

using namespace std;

int main(){
//	int n;
//	cin>>n;
//	bool flag =0;
//	for(int i=2;i<=sqrt(n);i++){
//		if(n%i==0){
//			cout<<"non prime"<<endl;
//			flag =1;
//			break;
//		}
//		
//	}
//	if(flag ==0){
//		cout<<"prime number"<<endl;
//	}

	int n;
	cin>>n;
	int rev=0;
	
	while(n>0){
		int lstdigit = n%10;
		rev = (rev *10)+ lstdigit;
		n = n/10;
	}
	cout<<rev<<endl;
 
}
