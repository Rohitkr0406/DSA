#include<iostream>
using namespace std;

int main()
{
    cout<<"Enter row size: ";
    int r;
    cin>>r;
    cout<<"Enter column size: ";
    int c;
    cin>>c;

    //creating 2d array
    int** arr = new int*[r];
    for(int i=0;i<r;i++)
    {
        arr[i] = new int[c];
    }

    //taking input
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>arr[i][j];
        }
    }

    //printing the array
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    //deleting the array

    for(int i=0;i<r;i++)
    {
        delete[] arr[i];
    }
    delete[] arr;
}