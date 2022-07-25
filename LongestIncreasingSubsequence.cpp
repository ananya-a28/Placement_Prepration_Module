#include<bits/stdc++.h>
using namespace std;
    //dp with binary search
int lengthOfLIS(vector<int>& nums) {
        if(nums.size()==0)
        {
            return 0;
        }
        vector<int>dp(nums.size(),1);
        int maxi=1;
        for(int i=0;i<nums.size();i++)
        {
            for(int prev=0;prev<i;prev++)
            {
                if(nums[prev]<nums[i])
                {
                    dp[i]=max(dp[i],1+dp[prev]);
                }
                maxi=max(dp[i],maxi);
            }
        }
        return maxi;
     }
int main()
{   int n;
    cin>>n;
    vector<int>nums;
    for(int i=0;i<n;i++)
    {
        cin>>nums[i];
    }
    return lengthOfLIS(nums);
    
    
}