#pragma once

#include <iostream>
#include <stack>

using namespace std;

namespace BOJ16120
{
	void Error() {
		cout << "NP" << endl;
	}

	void CheckPPAP(stack<string>& s)
	{
		string& str = s.top();

		if (str.length() > 3) {
			char p1 = str.at(str.length() - 4);
			char p2 = str.at(str.length() - 3);
			char p3 = str.at(str.length() - 2);
			char p4 = str.at(str.length() - 1);
			if (p1 == 'P' && p2 == 'P' && p3 == 'A' && p4 == 'P') {
				str.pop_back();
				str.pop_back();
				str.pop_back();
				str.pop_back();
				/*if (s.empty())
				{
					s.push(string());
				}*/
				string& tempStr = s.top();
				tempStr += 'P';

				CheckPPAP(s);
			}
		}
	}

	int Play16120() {
		std::ios::sync_with_stdio(false);
		std::cin.tie(nullptr);

		string inputStr;
		cin >> inputStr;

		stack<string> s;

		for (auto& c : inputStr)
		{
			if (c != 'P' && c != 'A') {
				Error();
				return 0;
			}

			if (s.empty()) {
				s.push(string());
			}
			string& str = s.top();
			str += c;

			CheckPPAP(s);

			/*if (str.length() > 3) {
				if (str != "PP") {
					Error();
					return 0;
				}
			}*/
		}

		if (s.size() == 1 && s.top() == "P") {
			cout << "PPAP";
			return 0;
		}
		else
		{
			Error();
		}

		return 0;
	}
}