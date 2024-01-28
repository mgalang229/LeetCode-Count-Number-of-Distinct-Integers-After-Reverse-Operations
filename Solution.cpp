class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        set<int> s;
        for (int& x : nums) {
            s.insert(x);
            int new_num = 0;
            while (x > 0) {
                new_num = new_num * 10 + x % 10;
                x /= 10;
            }
            s.insert(new_num);
        }
        return s.size();
    }
};
