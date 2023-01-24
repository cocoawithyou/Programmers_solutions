//https://school.programmers.co.kr/learn/courses/30/lessons/142086

#include <string>
#include <vector>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    string tmp;
    for (int i = 0; i < s.length(); i++) {
        if (tmp.find(s[i]) == string::npos) {
            answer.emplace_back(-1);
            tmp += s[i];
        }
        else {
            int j = i - 1;
            while (s[j] != s[i]) {
                j--;
            }
            answer.emplace_back(i - j);
        }
    }
    return answer;
}