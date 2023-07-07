#include <bits/stdc++.h>
class Solution
{
public:
    void setZeroes(vector<vector<int>> &matrix)
    {
        /*
          Time Complexity O(n*m);
          Space Complexity O(n+m);

          int n =matrix.size();
           int m= matrix[0].size();

            vector<pair<int,int>> zeros;
          for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                     if(matrix[i][j]==0){
                          zeros.push_back({i,j});
                     }
                }
          }
          for (const auto& pair : zeros) {
         //For Row
           for(int i=0 ;i<m;i++){
                 matrix[pair.first][i]=0;
           }
           //For Col
           for(int i=0 ;i<n;i++){
                 matrix[i][pair.second]=0;
            }
          }
 */

        // Time complexity O(n*m);
        // space Complexity O(1)
        int n = matrix.size();
        int m = matrix[0].size();
        bool flag1 = false, flag2 = false;
        for (int i = 0; i < n; i++)
        {
            if (matrix[i][0] == 0)
            {
                flag1 = true;
            }
        }
        for (int j = 0; j < m; j++)
        {
            if (matrix[0][j] == 0)
            {
                flag2 = true;
            }
        }
        for (int i = 1; i < n; i++)
        {
            for (int j = 1; j < m; j++)
            {
                if (matrix[i][j] == 0)
                {
                    matrix[i][0] = matrix[0][j] = 0;
                }
            }
        }
        for (int i = 1; i < n; i++)
        {
            for (int j = 1; j < m; j++)
            {
                if (matrix[i][0] == 0 || matrix[0][j] == 0)
                {
                    matrix[i][j] = 0;
                }
            }
        }
        if (flag1 == true)
        {
            for (int i = 0; i < n; i++)
            {
                matrix[i][0] = 0;
            }
        }
        if (flag2 == true)
        {
            for (int j = 0; j < m; j++)
            {
                matrix[0][j] = 0;
            }
        }
    }
};