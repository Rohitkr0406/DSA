#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int Binarysearch(vector<int> v,int n,int key)
{
    
    int start= 0, end= n-1;
    int mid= (start + end)/2;

    while(start<=end){
        if(v[mid]==key)
            return mid;
        
        else if(v[mid]>key){
            end = mid-1;
        }
        else{
            start=mid+1;
        }
        mid= (start + end)/2;
        

    }
    return -1;
}

int main() {
    int n; 
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> vec; 
    int element;     

    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> element;
        vec.push_back(element); 
    }

    sort(vec.begin(),vec.end());

    int key;
    cout<<"Enter the element to search: ";
    cin>>key;

    int index= Binarysearch(vec,n,key);

    if(index!=-1){
        cout<<"Element found ";
        cout<<"The index of "<<key<<"is "<<index;
    }
    else{
        cout<<"Element not found";
    }
    return 0;
}
