#include<iostream>

using  namespace std;

void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void function(){
	for(int 
}

int partition(int*array, int l, int h){
    int i = l;
    int j = h;
    int pivot = l;
    while(i<j){
        while(array[pivot]<=array[i] ) i++;
        while(array[pivot]>=array[j]) j--;
        if(i<j) swap(&array[i],&array[j]);
    }
    swap(&array[pivot],&array[j]);
    return j;
}

void quickSort(int* array,int l,int h){
    if(l<h){
        int j = partition(array,l,h);
        quickSort(array,l,j);
        quickSort(array,j+1,h);
    }
}

int main()
{
    int array[10] = {6,5,8,9,3,10,15,12,16};
    array[9] = 100;
    quickSort(array,0,9);
    for (int i = 0; i < 10; i++)
    {
        cout<<array[i];
    }

    
    return 0;
}
