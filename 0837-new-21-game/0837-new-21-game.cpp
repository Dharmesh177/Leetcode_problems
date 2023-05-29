class Solution {
public:
    double new21Game(int n, int k, int maxPts) {
      if (k == 0 || n >= k + maxPts)
            return 1.0;
        vector<double> dp(n + 1);
        double point = 1.0, probability = 0.0;
        dp[0] = 1.0;
        for (int i = 1; i <= n; i++) {
            dp[i] = point / maxPts;
            if (i < k)
                point += dp[i];
            else
                probability += dp[i];
            if (i - maxPts >= 0)
                point -= dp[i - maxPts];
        }
        return probability;    
    }
};