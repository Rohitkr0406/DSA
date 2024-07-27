#include<iostream>
using namespace std;

void maxmin(int n[100],int s)
{
    int max=INT_MIN;
    int min=INT_MAX;
    
    for (int i = 0; i < s; i++)
    {
        if(n[i]>max)
        max= n[i];
        if(n[i]<min)
        min= n[i];
    }

    cout<<"Largest element in array: "<<max<<endl;
    cout<<"Smallest element in array: "<<min<<endl;
    
}

int main()
{
    int n[100],s;
    cout<<"Enterthe size of the array: ";
    cin>>s;

    while(s>100 || s<0)
    {
      cout<<"Size out of limit,Re-enter: ";
      cin>>s;
        
    }

    cout<<"\nEnter the elements of the array:\n";
    for (int i = 0; i < s; i++)
    {
        cin>>n[i];
    }

    maxmin(n,s);
    
}