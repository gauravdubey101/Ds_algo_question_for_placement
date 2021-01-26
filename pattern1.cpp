#include<iostream>

using namespace std;

int main(){
//	int r;
//	cin>>r;
//	int c;
//	cin>>c;
//	for(int i=1;i<=r;++i){
//		for(int j=1;j<=c;++j){
//			cout<<"*";
//		}
//		cout<<endl;
//	}
	
//	int r,c;
//	cin>>r>>c;
//	for(int i=1;i<=r;i++){
//		for(int j=1;j<=c;j++){
//			if(i==1 || i ==r ||j==1||j== c){
//			cout<<"*";	
//			}
//		
//			else{
//				cout<<" ";
//			}
//		}
//		cout<<endl;
//	}




//  half pyramid after 180 rotaion
//	int n ;
//	cin>>n;
//	for(int i=1;i<=n;i++){
//		for(int j=1;j<=n;j++){
//			if(j<=n-i){
//				cout<<" ";
//			}
//			else{
//				cout<<"*";
//			}
//		}
//		cout<<endl;
//	}

//half pyramid using numbers

//	int n;
//	cin>>n;
//	for(int i=1;i<=n;i++){
//		for(int j=1;j<=i;j++){
//			cout<<i<<" ";
//		}
//		cout<<endl;
//	}

//floyd's triangle

//	int n;
//	cin>>n;
//	int c = 1;
//	for(int i=1;i<=n;i++){
//		for(int j=1;j<=i;j++){
//			cout<< c<<" ";
//			c++;
//		}
//		cout<<endl;
//	}
	
	
	//butterfly pattern
	
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cout<<"*";
		}
		int space = 2*n-2*i; 
		for(int j=1;j<=space;j++){
			cout<<" ";
		}
		for(int j=1;j<=i;j++){
			cout<<"*";
		}
		cout<<endl;
	}
	//
	for(int i=n;i>=1;i--){
		for(int j=1;j<=i;j++){
			cout<<"*";
		}
		int space = 2*n-2*i; 
		for(int j=1;j<=space;j++){
			cout<<" ";
		}
		for(int j=1;j<=i;j++){
			cout<<"*";
		}
		cout<<endl;
	}
	
	
	


}
