class Solution {
public:
    int numDecodings(string s) {
        int n = s.size();
        vector<int> dp(n, -1);
        return solve(0,n, dp, s);

    }
    int solve(int i, int n, vector<int>&dp, string&s){
        if(i>=n){
            return 1;

        }
        if(dp[i] != -1) return dp[i];
        if(s[i]=='0') return 0;

        int ans = solve(i+1,n, dp, s);
        if(i+1 < n && (s[i] == '1'|| s[i] == '2' && s[i+1] <='6'))ans += solve(i+2, n,dp, s);
        return dp[i] = ans;
    }
};