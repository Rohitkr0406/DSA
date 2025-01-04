#include <iostream>
#include <array>
#include <vector>

using namespace std;

int main() {
    //normal array making
    int arr[5]={1,2,3,4,2};
    
    //stl array making
    array<int,5> a={1,2,3,4,7};

    int size= a.size();

    for(int i=0;i<size; i++){

        cout<<a[i]<<endl; }

    cout<<"Element at 2nd Index-> "<<a.at(2)<<endl;

    cout<<"Empty or not-> "<<a.empty()<<endl;

    cout<<"First Element-> "<<a.front()<<endl;

    cout<<"last Element-> "<<a.back()<<endl;

    //vectors 
    vector<int> v;
    cout<<"Capacity: "<<v.capacity()<<endl;

    //last me element add karne ke lie push back
    v.push_back(1);
    cout<<"Capacity: "<<v.capacity()<<endl;

    v.push_back(5);
    cout<<"Capacity: "<<v.capacity()<<endl;

    v.push_back(6);
    cout<<"Capacity: "<<v.capacity()<<endl;
    cout<<"size: "<<v.size()<<endl;

    //last wala element nikal kr fhekne ke lie pop out
    cout<<"before pop: ";
    for(int i:v)
        cout<<i<<" ";
    cout<<endl;

    v.pop_back();

    cout<<"after pop: ";
    for(int i:v)
        cout<<i<<" ";
    cout<<endl;

    // array clear karne ke lie
    v.clear();
    cout<<"After clearing , array size: "<<v.size()<<endl;

    // yaha pr 5 ka matlab vector array ka size 5 hoga aur 1 ka matlab sabko 1 se bhar do
    vector<int> vec(5,1);
    
    //isse vec ka jitna elements thha sab vec2 me copy hoke ek naya vector array ban jayega
    vector<int> vec2(vec);
    cout<<"printing vec2:"<<endl;
    for(int i:vec2)
        cout<<i<<" ";

    
    return 0;
}