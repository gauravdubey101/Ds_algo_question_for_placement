#include<bits/stdc++.h>
using namespace std;


//void fib(int n){
//	int t1=0;int t2=1;
//	int next =0;
//	for(int i=1;i<=n;i++){
//		cout<<t1<<endl;
//		next = t1+t2;
//		t1=t2;
//		t2=next;
//	} return;
//	
//	 
//}
//int main(){
//	int n;
//	cin>>n;
//	fib(n);
//}


//factorial num

//int fact(int n){
//	int facto=1;
//	for(int i=2;i<n;i++){
//		facto *= i; 
//	}
//	
//}
//
//
//int main(){
//	int n;
//	cin>>n;
//	int ans = fact(n);
//	cout<<ans<<endl;
//	return 0;
//	
//}


//claculate ncr

//int fact(int n){
//	int facto=1;
//	for(int i=2;i<=n;i++){
//		facto *=i;
//	}
//	return facto;
//}
//
//int main(){
//	int n;
//	cin>>n;
//	int r;
//	cin>>r;
//	
//	int ans = fact(n)/(fact(r)*(fact(n-r)));
//	cout<< ans;
//}


//pascal triangle

//	int fact(int n){
//		int facto=1;
//		for(int i=2;i<n;i++){
//			facto *=i;
//		}
//		return facto;
//	}
//	
//	
//	int main(){
//		int n;
//		cin>>n;
//		
//		for(int i=0;i<n;i++){
//			for(int j=0;j<=i;j++){
//				cout<<fact(i)/(fact(j)*fact(i-j));
//			}
//			cout<<endl;
//		}
//		return 0;
//		
//	}


//even and odd


	//void checknum(int num){
	//	if(num%2 ==0){
	//		cout<<"number is even";
	//	}	
	//	else{
	//		cout<<"not even";
	//	}
	//}
	//int main(){
	//	int n;
	//	cin>>n;
	//	checknum(n);
	//	
	//}
	
	
	//even without function
	
//	int main(){
//		int n;
//		cin>>n;
//		if(n%2==0){
//			cout<<"even number";
//		}
//		else{
//			cout<<"not even ";
//		}
//	}


//write program with two function to print maximum and minimum among three number


void maxm(int one,int two,int three){
	if((one>two)&&(one>three)){
		{
			cout<<one<<"is greater";
		}
	}
	else if((two>one)&&(two>three)){
		{
			cout<<two<<"is greater"<<endl;
		}
		
	}
	else{
		cout<<three<<"greater"<<endl;
	}
}

void minm(int one,int two,int three){
	if((one<two)&&(one<three)){
		cout<<one<<" is minimum";
	}
	else if((two<one)&&(two<three)){
		cout<<two<<" is minimum"<<endl;
	}
	else{
		cout<<three<<"three is minimum"<<endl;
	}
}
int main(){
	int n1,n2,n3;
	cin>>n1>>n2>>n3;
	maxm(n1,n2,n3);
	minm(n1,n2,n3);
	
}
