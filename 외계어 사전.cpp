//https://school.programmers.co.kr/learn/courses/30/lessons/120869

#include <string>
#include <vector>

using namespace std;

int solution(vector<string> spell, vector<string> dic) {
    for (auto i : dic) {
        bool check = true;
        for (auto j : spell) {
            if (i.find(j) == string::npos)
                check = false;
        }
        if (check)
            return 1;
    }
    return 2;
}