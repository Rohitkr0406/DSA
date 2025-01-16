#include<iostream>
using namespace std;

class allrowsum{
    public:

    void rowsum(vector<vector<int>>& arr, int row, int col,int sum[100]){
        for(int i=0; i<row; i++)
        {
            sum[i] = 0;
            for(int j=0; j<col; j++)
            {
                sum[i] += arr[i][j];
            }  
        }
    }
};