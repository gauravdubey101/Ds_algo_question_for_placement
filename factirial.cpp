#include<bits/stdc++.h>
using namespace std;

//learning function

//to check prime
bool isPrime(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return false;
		}
	}
		return true;
}
 
 
int main(){
	
	
//	int n1,n2;
//	cin>>n1>>n2;
//	int fact =1;
//	
//	for(int i=1;i<=n1;i++){
//		fact = fact*i;
//		
//	}
//	cout <<fact<<endl;
//	int factd=1;
//	for(int i=1;i<=n2;i++){
//		factd = factd*i;
//	}
//	cout<<factd;

//prime numbers


int a,b;
cin>>a>>b;
for(int i=a;i<=b;i++){
	if(isPrime(i)){
		cout<<i<<"prime"<<endl;
	}else{
		cout<<i<<"notPrime"<<endl;
	}
}
}
