#pragma once

#include <vector>
#include <algorithm>
#include <iostream>
#include <limits.h>

using namespace std;

namespace BOJ1644
{
    static bool comparision(const int& x, const int& y)
    {
        return x < y;
    }
    static vector<int> GetPrimes(const int& n)
    {
        
    }
    static int Play()
    {
        int N;
        cin >> N;

        vector<int> v = GetPrimes(N);

        int left = 0, right = 0;

        int total = 0;

        while (true)
        {
            
        }

        cout << total;
        
        return 0;
    }
};