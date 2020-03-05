#include <vector>
#include <iostream>
using namespace std;

/// 调试未通过！！！

class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& M) {
        int rows=M.size();
        int cols=M[0].size();
        vector<vector<int>> res(rows,vector<int>(cols));
        for (int i=0; i < rows; i++)
        {
            for (int j=0; j < cols; j++)
            {
                int sum=0;
                int count=0;
                for (int x=max(0,i-1);x < max(rows-1,i+1);x++)
                {
                    for (int y=max(0,j-1); y < max(cols-1,j+1); j++)
                    {
                        sum+=M[i][j];
                        count++;
                    }
                }
                res[i][j]=sum/count;
            }
        }
        return res;
    }
};
