#include <vector>
using namespace std;

class searchMatrix {
public:
    bool searchelement(vector<vector<int>>& matrix, int target) {
        int row= matrix.size();
        int col= matrix[0].size();

        int start= 0;
        int end= row*col- 1;
        int mid,element;
       
        while(start<=end)
        {
            mid= start + (end-start)/2;
            element= matrix[mid/col][mid%col];
            
            if(element==target)
                return true;
            
            else if(element<target)
            {
                start = mid+1;
            }

            else
            {
                end = mid-1;
            }

        }
        return false;
        
    }
};

/*
question: https://leetcode.com/problems/search-a-2d-matrix/description/*/