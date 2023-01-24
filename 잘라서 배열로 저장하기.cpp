//https://school.programmers.co.kr/learn/courses/30/lessons/120913

#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_str, int n) {
    vector<string> answer;
    string s = "";
    int j = 0;
    int idx = 0;
    while (idx < my_str.length()) {
        s += my_str[idx];
        idx++;
        j++;
        if (j == n) {
            j %= n;
            answer.emplace_back(s);
            s.clear();
        }
    }
    if (j)
        answer.emplace_back(s);

    return answer;
}