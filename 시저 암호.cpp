//https://school.programmers.co.kr/learn/courses/30/lessons/12926

#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    string answer = "";
    for (auto i : s) {
        if (isupper(i)) {
            answer += (i - 'A' + n) % 26 + 'A';
        }
        else if (islower(i)) {
            answer += (i - 'a' + n) % 26 + 'a';
        }
        else {
            answer += " ";
        }
    }
    return answer;
}