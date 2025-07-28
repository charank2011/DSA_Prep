class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
        int i , j , k , n ;
        n = matrix.size(); 
        int b[20][20];
        for(int i = 0 ; i<n-1;i++)
        // for(i = 0 ;i<n;i++)
        // {
        //     for(j= 0 ;j<n;j++)
        //     {
        //         b[i][j] = matrix[n-j-1][i];

                
        //     }

        }
         for(i = 0 ;i<n;i++)
        {
            for(j= 0 ;j<n;j++)
            {
                 matrix[i][j]=b[i][j] ;

                
            }

        }
   

        
    }
};