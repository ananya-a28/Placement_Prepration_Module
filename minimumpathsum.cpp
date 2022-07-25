#include<bits/stdc++.h>
using namespace std;
    int solve(vector<vector<int>>& arr,int a,int b,int m,int n, vector<vector<int>>&dp)
    {   
    if(a == m-1 && b == n-1) {
		return arr[a][b];
	}
	if(dp[a][b]!=-1)
    {
        return dp[a][b];
    }
	
	if(a >= m || b >= n)
        return INT_MAX;
	
	int r=arr[a][b]+solve(arr,a, b+1, m, n,dp);
    int d=arr[a][b]+solve(arr,a+1, b, m, n,dp);
	
	dp[a][b]=min(r, d);
    return dp[a][b];

    }
        
        
    
    int minPathSum(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>>dp(m+1,vector<int>(n+1,-1));
       return solve(grid,0,0,m,n,dp); 
    }

int main()
{   int n;
    cin>>n;
    int m;
    cin>>m;
    vector<vector<int>>nums;
    for(int i=0;i<n;i++)
    { for(int j=0;j<m;j++)
        cin>>nums[i][j];
    }
    return minPathSum(nums);
    
    
}
