#include<iostream>

using  namespace std;

int main()
{
    int arr1[3][4]={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }   

    int *A[3];
    A[0] = new int[4];
    A[1] = new int[4];
    A[2] = new int[4];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }

    int **arr2;
    arr2 = new int *[3];
    arr2[0] = new int[4];
    arr2[1] = new int[4];
    arr2[2] = new int[4];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }

    delete []A[0];
    delete []A[1];
    delete []A[2];
    delete []A;
    delete []arr2[0];
    delete []arr2[1];
    delete []arr2[2];
    delete []arr2;
    // A = NULL;
    arr2 = NULL;
    return 0;
}