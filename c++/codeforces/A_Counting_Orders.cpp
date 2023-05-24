#include<iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n],b[n];
		for(int i=0; i<n; i++){
			cin>>a[i];
		}	
		for(int i=0; i<n; i++){
			cin>>b[i];
		}
		sort(a,a+n,greater<int>());
		sort(b,b+n,greater<int>());
		for(int i=0; i<n; i++){
			cout<<a[i]<<" ";
		}	
		cout<<endl;
		for(int i=0; i<n; i++){
			cout<<b[i]<<" ";
		}
		cout<<endl;
		cout<<"p s i j"<<endl;	
		int count = 0;
		int product = 1;
		for(int i=0,j=0; i<n, j<n;){
			cout<<"==>"<<i<<" "<<j<<endl;
			if(a[i]>b[j]){
				i++;
				if(i>=n){
					i=n-1;
					count = n;
					product*=(count-j-1);
					j=j+1;
				}
			}
			else{
			   	if((i-j)<=0){
					product = 0;
					break;
				}
				else{
					product*=(i-j);
					j++;
					cout<<product<<" "<<count<<" "<<i<<" "<<j<<endl;
				}
			}
		}
		cout<<product<<endl;
				
	}
}
