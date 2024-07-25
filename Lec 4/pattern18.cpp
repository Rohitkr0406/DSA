#include<iostream>
using namespace std;

int main()
{
    cout<<"Enter the size of the array";
    int n;
    cin>>n;

    cout<<"pattern 18"<<endl;
      for(int i=0;i<n;i++)
        {
          for(int j=0;j<=i;j++)
            {
              char ab = 'A'+i+j;
              cout<<ab<<"\t";
            }
          cout<<endl;
        }
    
}