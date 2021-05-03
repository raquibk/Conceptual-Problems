#include <vector>
#include <iostream>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int num, complement;
        for (int i=0; i<nums.size(); i++) {
            num = nums[i];
            complement = target-nums[i];
            for(int k=0; k<nums.size(); k++) {
                if (nums[k] == complement) {
                    cout << "[" << i << "," << k << "]"<< endl;
                }
            }
        }
    }
};