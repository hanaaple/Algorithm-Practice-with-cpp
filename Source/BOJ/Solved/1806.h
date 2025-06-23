#pragma once

#include <vector>
#include <algorithm>
#include <iostream>
#include <limits.h>

using namespace std;

namespace BOJ1806
{
    static bool comparision(const int& x, const int& y)
    {
        return x < y;
    }
    static int Play()
    {
        int N, S;
        cin >> N >> S;
        vector<int> v;
        for (int i = 0; i < N; i++)
        {
            int Temp;
            cin >> Temp;
            v.push_back(Temp);
        }

        int left = 0, right = 0;
        int total = v[0];
        int minLength = INT_MAX;
        
        while (true)
        {
            if (total < S)
            {
                right++;
                if (v.size() <= right)
                {
                    break;
                }
                total += v[right];
            }
            else if (total >= S)
            {
                total -= v[left];
                left++;

                if (v.size() <= left)
                {
                    break;
                }
            }
            
            if (total >= S)
            {
                minLength = std::min(minLength, right - left + 1);
            }
        }

        cout << (minLength == INT_MAX ? 0 : minLength);
        
        return 0;
    } 
};