#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of the pattern";
    cin>>n;

    cout<<"pattern 4"<<endl;
    for(int i=1;i<=n;i++)
    {
      for(int j=1;j<=i;j++)
        {
          cout<<i<<" ";
        }
      cout<<endl;
    }

}
