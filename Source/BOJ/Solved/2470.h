#pragma once

#include <vector>
#include <algorithm>
#include <iostream>
#include <limits.h>

using namespace std;

namespace BOJ2470
{
    static bool comparision(const int& x, const int& y)
    {
        return x < y;
    }
    static int Play()
    {
        int N;
        cin >> N;

        vector<int> solutions;
        
        for (int i = 0; i < N; i++)
        {
            int solution;
            cin >> solution;
            solutions.push_back(solution);
        }

        sort(solutions.begin(), solutions.end(), comparision);
        
        int left = 0;
        int right = solutions.size() - 1;

        int min = INT_MAX;
        int cachedL = solutions[left];
        int cachedR = solutions[right];

        while (left < right)
        {
            int leftElement = solutions[left];
            int rightElement = solutions[right];
            int SumResult = (leftElement + rightElement);
            int Abs = abs(leftElement + rightElement);

            if (Abs < min)
            {
                min = Abs;
                cachedL = leftElement;
                cachedR = rightElement;
                if (Abs == 0)
                {
                    break;
                }
            }

            if (SumResult > 0)
            {
                right--;
            }
            else if (SumResult < 0)
            {
                left++;
            }
        }
        cout << cachedL << " " << cachedR << endl;
        return 0;
    } 
};