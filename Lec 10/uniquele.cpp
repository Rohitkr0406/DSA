#include<iostream>
using namespace std;

int unique(int arr[100],int s)
{
    int ans=0;
    for (int i = 0; i < s; i++)
    {
        ans=ans^arr[i];
    }

    return ans;
    
}

int main()
{
    int arr[100],s;
    cout<<"Enter the size of the array: ";
    cin>>s;

    cout<<"Enter the elements in the array\n";
    for (int i = 0; i < s; i++)
    {
        cin>>arr[i];
    }

    cout <<"Unique element: "<<unique(arr,s);

    return 0;
}