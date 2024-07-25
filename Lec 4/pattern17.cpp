#include<iostream>
using namespace std;

;int main()
{
    cout<<"Enter the size of the array";
    int n;
    cin>>n;

     cout<<"pattern 17"<<endl;
     int i=1;
      while(i<=n)
        {
          int j=1;
          while(j<=i)
            {
              char chl='A'+i-1;
              cout<<chl<<" ";
              j++;
            }
          cout<<endl;
          i++;
        }
    
}