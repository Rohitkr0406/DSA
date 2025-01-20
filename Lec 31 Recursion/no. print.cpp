#include <iostream>
using namespace std;

void print(int n) {
    if(n == 0) {
        return;
    }
    print(n-1);
    cout<<n<<endl;
}

int main() {
    cout<<"Enter the no. for which you want to print the numbers: ";
    int n;
    cin>>n;
    print(n);
    
    return 0;
}