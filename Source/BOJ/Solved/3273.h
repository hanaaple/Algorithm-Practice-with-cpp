#pragma once

#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

namespace BOJ3273
{
    static bool comparision(const uint32_t& x, const uint32_t& y)
    {
        return x < y;
    }
    
    static int Play()
    {
        int n;
        cin >> n;
        vector<uint32_t> sequence;
        for (int i = 0 ; i < n ; i++)
        {
            uint32_t temp;
            cin >> temp;
            sequence.push_back(temp);
        }

        uint32_t x;
        cin >> x;
        
        sort(sequence.begin(), sequence.end(), comparision);
        
        uint32_t total = 0;
        
        int left = 0;
        int right = sequence.size() - 1;
        
        while (left < right)
        {
            uint32_t leftElement = sequence[left];
            uint32_t rightElement = sequence[right];
            uint32_t tempResult = leftElement + rightElement;
            if (tempResult == x)
            {
                total++;
                left++;
            }
            else if (tempResult > x)
            {
                right--;
            }
            else if (tempResult < x)
            {
                left++;
            }
        }
        cout << total << endl;

        return 0;
    } 
};