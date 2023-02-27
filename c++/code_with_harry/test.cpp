#include<iostream>
#include<bits/stdc++.h>
#include<vector>

using  namespace std;

// int main()
// {
//     string s="karan";
//     for (int i = 0; i < s.length();i++)
//     {
//         cout<<s[i]<<endl;
//     }
    
//     return 0;
// }

class Solution {
  public:
    
    int solveSpace(string str1, string str2)
    {
        int n = str1.length();
        int m = str2.length();
       
        vector<int> curr(m+1, 0);
        vector<int> next(m+1, 0);
        
        for(int j=0;j<m;j++)
        {
           next[j] = str2.length() - j ;
        }
        
        
       for(int i=n-1;i>=0;i--)
       {
           for(int j=m-1;j>=0;j--)
           {
                curr[m] = str1.length() - i ;
                int ans = 0 ;
                if( str1[i] == str2[j])
                {
                   ans  = next[j+1] ;
                }
                else
                {
                  int insertAns = 1 + curr[j+1];
                  int deleteAns = 1 + next[j];
                  int updateAns = 1 + next[j+1];
                  ans = min(insertAns, min(deleteAns, updateAns));
                }
                curr[j] = ans ;
           }
           next = curr;
       }
       
       return next[0];
    }
  
  
    
    int solveTab(string str1, string str2)
    {
        int n = str1.length();
        int m = str2.length();
        vector<vector<int>> dp(n+1, vector<int>(m+1, 0));
        
        for(int j=0;j<m;j++)
        {
           dp[n][j] = str2.length() - j ;
        }
        
        for(int i=0;i<n;i++)
        {
           dp[i][m] = str1.length() - i ;
        }

        
       for(int i=n-1;i>=0;i--)
       {
           for(int j=m-1;j>=0;j--)
           {
                int ans = 0 ;
                if( str1[i] == str2[j])
                {
                   ans  = dp[i+1][j+1] ;
                }
                else
                {
                  int insertAns = 1 + dp[i][j+1];
                  int deleteAns = 1 + dp[i+1][j];
                  int updateAns = 1 + dp[i+1][j+1];
                  ans = min(insertAns, min(deleteAns, updateAns));
                }
                dp[i][j] = ans ;
           }
       }
       
       return dp[0][0];
    }
  
  
    
    int solveMem(string str1, string str2, int i, int j, vector<vector<int>> &dp)
    {
        if(i >= str1.length())
        {
            return str2.length() - j ;
        }
        
        if(j >= str2.length())
        {
            return str1.length() - i ;
        }
        
        if(dp[i][j] != -1)
        {
            return dp[i][j];
        }
        
        
        if( str1[i] == str2[j])
        {
            return solveMem(str1, str2, i+1, j+1, dp);
        }
        else
        {
            int insertAns = 1 + solveMem(str1, str2, i, j+1, dp);
            int deleteAns = 1 + solveMem(str1, str2, i+1, j, dp);
            int updateAns = 1 + solveMem(str1, str2, i+1, j+1, dp);
            
            return dp[i][j] = min(insertAns, min(deleteAns, updateAns));
        }
    }
    
    
    int solve(string str1, string str2, int i, int j)
    {
        if(i >= str1.length())
        {
            return str2.length() - j ;
        }
        
        if(j >= str2.length())
        {
            return str1.length() - i ;
        }
        
        if( str1[i] == str2[j])
        {
            return solve(str1, str2, i+1, j+1);
        }
        else
        {
            int insertAns = 1 + solve(str1, str2, i, j+1);
            int deleteAns = 1 + solve(str1, str2, i+1, j);
            int updateAns = 1 + solve(str1, str2, i+1, j+1);
            
            return min(insertAns, min(deleteAns, updateAns));
        }
    }

    
    
    int editDistance(string s, string t) {
        
        // vector<vector<int>> dp(s.length()+1, vector<int>(t.length()+1, -1));
        // return solveMem(s, t, 0, 0, dp);
        
        // return solveTab(s, t);
        
        return solveSpace(s, t);
    }
};

