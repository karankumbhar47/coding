#include <stdio.h>


int main(){
    int stages = 4, min;
    int n = 8; //number of vertices
    int cost[9], d[9], p[9];
    int c[9][9]={
        {0,0,0,0,0,0,0,0,0},
        {0,0,2,1,3,0,0,0,0},
        {0,0,0,0,0,2,3,0,0},
        {0,0,0,0,0,6,7,0,0},
        {0,0,0,0,0,0,8,9,0},
        {0,0,0,0,0,0,0,0,6},
        {0,0,0,0,0,0,0,0,4},
        {0,0,0,0,0,0,0,0,5},
        {0,0,0,0,0,0,0,0,0}
    };

    cost[n] = 0;
    for(int i=n-1; i>=1; i--)
    {
        min = 32767; 
        for(int k=i+1;k<=n;k++){
            if(c[i][k]!=0 && c[i][k]+cost[k]< min){
                min = c[i][k] + cost[k];
                d[i] = k;
            }
        }
        cost[i] = min;
    }
    p[1] = 1;
    p[stages] = n;
    for(int i=2; i<stages; i++) p[i] = d[p[i-1]];

    for(int j=0; j<9; j++){
        printf("%d ",p[j]);
    }
    printf("\n");
    printf("%d",cost[1]);
}