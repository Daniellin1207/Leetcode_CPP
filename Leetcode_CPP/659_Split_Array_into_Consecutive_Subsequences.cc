#include <vector>
#include <map>
using namespace std;

class Solution {
public:
    bool isPossible(vector<int>& nums) {
        int n = nums.size();
        //sort(nums.begin(), nums.end());
        if (n < 3) return false;
        map<int, int>mp;
        for (int i = 0; i < n; ++i) mp[nums[i]]++;
        
        map<int, int>mp2;
        for (int i = 0; i < n; ++i) {
            int x = nums[i];
            if (mp[x] <= 0) continue;
            if (mp2[x-1] > 0) {
                mp2[x]++, mp2[x-1]--, mp[x]--;
            } else if (mp[x+1] > 0 && mp[x+2] > 0) {
                mp[x]--, mp[x+1]--, mp[x+2]--;
                mp2[x+2]++;
            } else {
                return false;
            }
        }
        return true;
    }
};