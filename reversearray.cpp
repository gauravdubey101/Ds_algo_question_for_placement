#include<bits/stdc++.h>

using namespace std;
void  revarray(int arr[],int start, int end){
	while(start<end){
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
}
//orgingnal function
void printArray(int arr[],int size){
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
		cout<<endl;
	}
}

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	//orginal function
	//printArray(arr,n);
	//reverse array 
	revarray(arr,0,n-1);
	cout<<"Reversed array is" <<endl;
	
	printArray(arr,n);
}
