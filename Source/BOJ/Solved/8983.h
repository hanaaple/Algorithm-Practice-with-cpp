#pragma once

#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

namespace BOJ8983
{
    struct Animal
    {
        int x;
        int y;

        bool IsInRange(int start, int Length) const {
            return Length >= std::abs(x - start) + y;
        }
    };

    static void Play()
    {
        int M, N, L;

        cin >> M >> N >> L;

        vector<int> MVector;

        vector<Animal> Animals;

        for (int i = 0; i < M; i++)
        {
            int m;
            cin >> m;
            MVector.push_back(m);
        }
        std::sort(MVector.begin(), MVector.end(), [](int a, int b) {
            return a < b;
            });

        for (int i = 0; i < N; i++)
        {
            int x, y;
            cin >> x >> y;

            if (y > L) {
                continue;
            }

            Animal a = Animal();
            a.x = x;
            a.y = y;
            Animals.push_back(a);
        }

        std::sort(Animals.begin(), Animals.end(), [](Animal a, Animal b) {
            return a.x < b.x;
            });

        int result = 0;

        for (const auto& AnimalInstance : Animals)
        {
            auto start = MVector.begin();
            auto end = MVector.end();

            std::vector<int>::iterator target = start + (end - start) / 2;
            while (true)
            {
                int x = *target;
                if (AnimalInstance.IsInRange(x, L))
                {
                    result++;
                    break;
                }

                if (start >= end) {
                    break;
                }

                if (x > AnimalInstance.x) {
                    end = target;
                    target = start + (end - start) / 2;
                }
                else if (x < AnimalInstance.x) {
                    start = target + 1;
                    target = start + (end - start) / 2;
                }
                else {
                    break;
                }
            }
        }
        std::cout << result;
    }
}
