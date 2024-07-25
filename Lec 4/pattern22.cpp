#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of the array";
    cin>>n;

     cout<<"pattern 22"<<endl;
      for(int i=1;i<=n;i++)
        {
          int space=1;
          while(space<i)
            {
              cout<<"\t";
              space++;
            }
    
          
          int j=n-i+1;
          while(j)
            {
              cout<<"*\t";
              j--;
            }
          cout<<endl;
        }
}