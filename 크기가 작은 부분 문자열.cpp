//https://school.programmers.co.kr/learn/courses/30/lessons/147355

#include <string>
#include <vector>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
    for (int i = 0; i <= t.size() - p.size(); i++) {
        string s = t.substr(i, p.size());
        if (stoll(s) <= stoll(p))
            answer++;
    }
    return answer;
}