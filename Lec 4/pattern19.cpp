#include<iostream>
using namespace std;

int main()
{
    cout<<"Enter the size of the array";
    int n;
    cin>>n;

    cout<<"pattern 19"<<endl;
      for(int i=1;i<=n;i++)
        {
          char ab= 'A'+n-i;
          for(int j=1;j<=i;j++)
            {
              cout<<ab<<"\t";
              ab++;
            }
          cout<<endl;
        }
    
}