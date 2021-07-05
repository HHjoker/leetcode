#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution 
{
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        /*vector<int>::iterator it = nums1.begin();

        for (int i = 0; i < n; i++)
        {
            if (*it > nums2[i])
            {
                nums1.insert(it, nums2[i]);
                it++;
            }
            it++;
        }*/

        for (int i = 0; i < n; i++)
        {
            nums1[m + i] = nums2[i];
        }

        sort(nums1.begin(), nums1.end());
    }
};
