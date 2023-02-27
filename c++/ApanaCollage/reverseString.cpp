#include<iostream>

using  namespace std;

void reverse(string s){
    if(s.length()==0){
        return
    }
    else{
        s=s.substr(1);
        reverse(s);
        cout<<s[0];
    }
}

int main()
{
    string s;
    cin>>s;
    reverse(s);

    return 0;
}