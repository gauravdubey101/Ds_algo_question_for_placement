#include<bits/stdc++.h>
using namespace std;

//int main(){
//	int n;
//	cout<<"enter the number printed :";
//	cin >>n;
//	
//	for(int i =0;i<n;i++){
//		for(int j=0;j<n;j++){
//			if(i)
//			cout<<"*";
//		}
//		cout<<"\n";
//	}
//}

int main(){
	int n,rev =0,rem;
	cout<<"enter number";
	cin>>n;
	while(n!=0){
		rem = n%10;
		rev = (rev *10)+rem;
		n /=10;
	}
	cout<<rev;
}
