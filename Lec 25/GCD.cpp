#include<iostream>
using namespace std;

class GCD{
    public:
    int gcd(int a, int b){
        if(a==0)
            return b;

        if(b==0)
            return a;

        while(a!=b)
        {
            if(a>b)
                a= a-b;
            else
                b= b-a; 
        }
        return a;
    }
        
};

int main() {
    GCD gcdCalculator;
    int a = 56, b = 98;
    cout << "GCD of " << a << " and " << b << " is " << gcdCalculator.gcd(a, b) << endl;
    return 0;
}