#include<bits/stdc++.h>
#include<string.h>

using namespace std;
#define ASCII_SIZE 256
char *removechr(char *string1, char *string2 ){
	
	int *count = (int *)calloc(sizeof(int), ASCII_SIZE);
		for(int i=0;*(string2+i);i++){
			count[*(string2+i)]++;
		}
		int i=0;int j=0;
		while(*(string1+i)){
			char temp = *(string1+i);
			if(count[temp] ==0){
				*(string1+j) = *(string1+i);j++;
			}
			i++;
		}
		*(string1+j) = '\0';
		return string1;
	
}

int main(){
	
	char string1[] = "india";
	char string2[]="cie";
//	string s1,s2;
//	cin>>s1;
//	cin>>s2;
//	int n1 = s1.length();
//	int n2 = s2.length();
//	char string1[n1+1];
//	char string2[n2+1];
	
	
	cout<<"input strings:\n";
	cout<<"string1:";
	for(int i=0;i<strlen(string1);i++){
		cout<<string1[i];
	}
	cout<<"\n string2:";
	for(int i=0;i<strlen(string2);i++){
		cout<<string2[i];
	}
	cout<<"\n output:";
	cout<<removechr(string1,string2);
	
		for(int i=0;i<strlen(string1);i++){
		cout<<string1[i];
	}
	cout<<"\n string2:";
	for(int i=0;i<strlen(string2);i++){
		cout<<string2[i];
	}
	return 0;
	
}
