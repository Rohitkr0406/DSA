#include<iostream>
using namespace std;

int main()
{
    cout<<"Enter the size of the array";
    int n;
    cin>>n;

    cout<<"pattern 23"<<endl;
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
              cout<<i<<"\t";;
              j--;
            }
          cout<<endl;
        }
      
}