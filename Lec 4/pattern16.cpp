#include<iostream>
using namespace std;

int main()
{
    cout<<"Enter the size of the array";
    int n;
    cin>>n;

     cout<<"\n\n";
      cout<<"pattern 16"<<endl;
      char ch='A';
      while(ch<=n+64)
        {
          
          int j=0;
          while(j<n)
            {
              char chm= ch+j;
              cout<<chm<<"\t";
              j++;
            }
          cout<<endl;
          ch++;
        }
}