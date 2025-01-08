#include <iostream>
#include <vector>

using namespace std;

void reversearray(vector<int>& v) {

    int s = 0;
    int e = v.size() - 1;
    while(s < e) {
        swap(v[s], v[e]);
        s++;
        e--;
    }
}

int main() {

    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8};
    reversearray(v);
    for (int i:v) {
        cout<<i<<" ";
    }
    return 0;
}