#include<iostream>
using namespace std;

int* occurrence(int arr[1000],int s)
{
   int* occ=new int[s];
   int count=0;
   for (int i = 0; i < s; i++)
   {
    count=0;
    for (int j = 0; j < s; j++)
    {
        if(arr[i]==arr[j])
            count++;
    }
    occ[i]=count;
   }
   return occ;
   
}

bool uniqueocc(int* occ,int s)
{
    for (int i = 0; i < s; i++)
    {
        for (int j = i+1; j < s; j++)
        {
            if(occ[i]==occ[j])
            return false;
        }
    }
    return true;
}

int main()
{
   int arr[1000];
   int s;
   cout<<"Enter the size of the array: ";
   cin>>s;

   while(s<1 || s>1000)
   {
    cout<<"Invalid size , please enter the correct size of array: ";
    cin>>s;
   }

   cout<<"Enter the elements of the array\n";
   for (int i = 0; i < s; i++)
   {
    cin>>arr[i];
   }
   
   int* occ= occurrence(arr,s);


   if(uniqueocc(occ,s))
    cout<<"The array has unique occurrences"<<endl;
   else
    cout<<"The array doesn't have unique occurrences"<<endl;

    delete[] occ;
    return 0;
}