#include<bits/stdc++.h>
#include <iostream> 
#include <string> 
using namespace std;
int main(){
	string str;
	int count0=0,count1=0,i,n;
        cout << "Please enter your name in upper case: \n"; 
        getline(cin, str);
        n=str.length();
	for(i=0;i<n;i++){
	if(str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U'){
		count0++;
		
	}
	else{
		count1++;
	}	
	}
	cout<<"There are"<<count0<<"vowels"<<endl;
	cout<<"There are"<<count1<<"Consonants"<<endl;
	return 0;
}
