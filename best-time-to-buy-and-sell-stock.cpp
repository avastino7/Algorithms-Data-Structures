class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int smax[n];
        smax[n-1] = prices[n-1];
        for(int i =n-2;i>=0;i--)
        {
            smax[i] = max(smax[i+1],prices[i+1]);
        }
        int ans=0;
        for(int i=0;i<n;i++)
        {
            ans = max(ans,smax[i]-prices[i]);
        }
        return ans;
    }
};
