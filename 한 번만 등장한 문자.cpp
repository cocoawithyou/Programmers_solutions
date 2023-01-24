//https://school.programmers.co.kr/learn/courses/30/lessons/120896

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string s) {
    string answer = "";
    for (auto i : s) {
        int check = 0;
        for (auto j : s) {
            if (i == j)
                check++;
        }
        if (check == 1) {
            answer += i;
        }
    }
    sort(answer.begin(), answer.end());
    return answer;
}