
class Solution {
public:
    int poorPigs(int buckets, int minutesToDie, int minutesToTest) {
         int t =minutesToTest/minutesToDie + 1;
    return ceil(log(buckets)/log(t));
    
    }
};