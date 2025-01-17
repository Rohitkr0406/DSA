#include<iostream>
using namespace std;

int main()
{
    cout<<"Enter row size: ";
    int r;
    cin>>r;
    int **jaggered= new int*[r];
    int *sizes = new int[r]; // Array to store the size of each row

    for(int i=0;i<r;i++)
    {
        cout<<"Enter column size for row "<<i+1<<": ";
        int c;
        cin>>c;
        jaggered[i]=new int[c];
        sizes[i] = c; // Store the size of the current row
        cout<<"Enter elements for row "<<i+1<<": ";
        for(int j=0;j<c;j++)
        {
            cin>>jaggered[i][j];
        }
    }

    //printing the array
    for(int i = 0; i < r; i++)
    {
        cout<<"Row "<<i+1<<": ";
        for(int j = 0; j < sizes[i]; j++) // Use sizes[i] to get the number of columns in the current row
        {
            cout << jaggered[i][j] << " ";
        }
        cout << endl;
    }

    //deleting the array
    for(int i=0;i<r;i++)
    {
        delete[] jaggered[i];
    }
    delete[] jaggered;
}