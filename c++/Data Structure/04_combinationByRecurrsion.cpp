#include<iostream>

//factorial inbuilt function takes O(n) time
// from pascal triangle we can find that
int combination(int n , int r){
    if (r==0 or n==r){
        return 1;
    }
    else{
        return combination(n-1,r-1)+combination(n-1,r);
    }
};

using  namespace std;

int main()
{
    int r=4,n=5;
    cout<< combination(n,r)<<endl;
    return 0;
}