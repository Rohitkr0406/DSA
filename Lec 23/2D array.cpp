#include<iostream>
#include<vector>
#include"rowsum.cpp"
#include"spiralprint.cpp"
#include"binarysearch.cpp"
#include"waveprint.cpp"

using namespace std;

void maxelement(int sum[], int row, int &max, int &rowNum)
{
    max = sum[0];
    rowNum = 0;
    for(int i=1; i<row; i++)
    {
        if(sum[i] > max)
        {
            max = sum[i];
            rowNum = i;
        }
    }
}

int main()
{
    int row, col;
    cout<<"Enter the number of rows: ";
    cin>>row;
    cout<<"Enter the number of columns: ";
    cin>>col;

    vector<vector<int>> arr(row, vector<int>(col));
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cin>>arr[i][j];
        }
    }

    cout<<"The array is: "<<endl;
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"Enter the function to execute: "<<endl;
    cout<<"1. rowsum"<<endl;
    cout<<"2. maxelement"<<endl;
    cout<<"3. spiral print"<<endl;
    cout<<"4. binary search (only works on sorted 2d array)"<<endl;
    cout<<"5. wave print"<<endl;
    cout<<"6. exit"<<endl;
    
    int caseNum;
    cin>>caseNum;

    switch(caseNum)
    {
        case 1:
        {
            cout<<"You have selected rowsum function"<<endl;
            int sum[100];
            allrowsum obj;
            obj.rowsum(arr, row, col, sum);
            
            for(int i=0; i<row; i++)
            {
                cout<<"Sum of row "<<i+1<<" is: "<<sum[i]<<endl;
            }
            break;
        }
        case 2:
        {
            cout<<"You have selected maxelement function"<<endl;
            int sum[100];
            allrowsum obj;
            obj.rowsum(arr, row, col, sum);
            
            int maxsum, rowNum;
            maxelement(sum, row, maxsum, rowNum);
            
            cout<<"Largest sum of row "<<rowNum + 1<<" is: "<<maxsum<<endl;
            break;
        }
        case 3:
        {
            cout<<"You have selected spiral print function"<<endl;
            spiralprint obj;
            vector<int> ans= obj.spiralOrder(arr);
            cout<<"The spiral print of the array is: ";
            for(int i=0; i<ans.size(); i++)
            {
                cout<<ans[i]<<" ";
            }
            cout<<endl;
            break;
        }
        case 4:
        {
            cout<<"You have selected binary search function"<<endl;
            int target;
            cout<<"Enter the target element: ";
            cin>>target;
            searchMatrix objbinary;
            bool result= objbinary.searchelement(arr, target);

            if(result)
                cout<<"Element found"<<endl;
            else
                cout<<"Element not found"<<endl;

            break;
        }
        case 5:
        {
            cout<<"You have selected wave print function"<<endl;
            wavePrintSolution obj;
            vector<int> ans= obj.wavePrint(arr, row, col);
            cout<<"The wave print of the array is: ";
            for(int i=0; i<ans.size(); i++)
            {
                cout<<ans[i]<<" ";
            }
            cout<<endl;
            break;
        }
        case 6:
            cout<<"You have selected exit function"<<endl;
            break;

        default:
            cout<<"Invalid input"<<endl;
    }

    return 0;
}
