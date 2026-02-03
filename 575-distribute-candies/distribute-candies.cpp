class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_map<int,int> mp;
        for(int n : candyType) mp[n]++;

        int n = candyType.size();
        int n1 = n / 2;
        if(n1 <= mp.size()){
             return n1;
        }
         
     return mp.size();
    }
};