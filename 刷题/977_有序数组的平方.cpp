#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for (vector<int>::iterator it = nums.begin(); it != nums.end(); it++)
        {
            *it = pow(*it, 2);
        }

        sort(nums.begin(), nums.end());

        return nums;
    }
};