#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        map<int, int> m1;
        int i=0, j=0, k=0;

        for (vector<int>::iterator it = bills.begin(); it != bills.end(); it++)
        {
            if (*it == 5)
            {
                m1[*it]++;
            }
            else if (*it == 10)
            {
                m1[*it]++;
                m1[5]--;
            }
            else if (*it == 20)
            {
                m1[*it]++;
                m1[5]--;
                m1[10]--;
            }
        }

        if (m1[5] < 0 || m1[10] < 0)
        {
            return false;
        }
        return true;
    }
};
