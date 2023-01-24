//https://school.programmers.co.kr/learn/courses/30/lessons/120903

#include <string>
#include <vector>

using namespace std;

int solution(vector<string> s1, vector<string> s2) {
    int answer = 0;
    if (s1.size() > s2.size()) {
        for (auto i : s2)
        {
            for (auto j : s1)
            {
                if (i.compare(j) == 0)
                    answer++;
            }
        }
    }
    else {
        for (auto i : s1)
        {
            for (auto j : s2)
            {
                if (i.compare(j) == 0)
                    answer++;
            }
        }
    }
    return answer;
}