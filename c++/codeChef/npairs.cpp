#include <bits/stdc++.h>
#include <iostream>
#define lli long long int;

using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    int c=0;
	    for(int i=0; i<n-1; i++){
	        for(int j=i+1; j<n && j<(i+9); j++){
	            // if(abs(int(s[i])-int(s[j]))==(j-i)){
	            //     c+=1;
	            // }
                cout<<j<<" ";
	        }
            // cout<<s[i]<<endl;
            cout<<endl;
	    }
	cout<<c<<endl;
	}
	return 0;
}
