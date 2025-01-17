#include<iostream>
using namespace std;

int update(int a)
{
    a+=10;
    return a;
}

int update2(int &a)
{
    a+=10;
    return a;
}

/*int& func(int a) {
    int num = a;
    int& ans= num;
    return ans;
}

int* fun(int n) {
    int* ptr = &n;
    return ptr;
}*/ //it will give error because we are returning the address of local variable
//so it's a bad practice to return the address of local variable

int main()
{
    int x = 10;
    x+=5;
    cout<<x<<endl;
    int &y = x;
    y+=5;
    cout<<x<<endl;

    update (x);
    cout<<x<<endl;

    update2 (x);
    cout<<x<<endl;

    /*int n;
    cin>>n;
    int arr[n];*/ //it will give error because the size of array should be constant in stack memory
    //bad practice as it will make the array of size n in stack memory instead of heap memory and program will crash

    //that's why we use dynamic memory allocation to make the array in heap memory
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int* arr = new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    //DMA (Dynamic memory allocation) can also be used for normal variables
    int* ptr = new int; //size of int is 4 bytes and size of pointer 8 bytes ,so total 12 bytes will be allocated in heap memory
    cout<<sizeof(ptr)<<endl;

    while(1)
    {
        int* ptr = new int[1000]; //it will keep on allocating memory in heap memory and will not release the memory
        //so it will keep on consuming the memory and will crash the program
        delete[] ptr; //it will delete the memory allocated in heap memory

    }


     return 0;
}