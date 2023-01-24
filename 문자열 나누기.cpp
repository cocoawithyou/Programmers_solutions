//https://school.programmers.co.kr/learn/courses/30/lessons/140108

#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    int me, you;
    me = you = 0;
    char tmp = s[0];
    for (int i = 0; i < s.size(); i++) {
        if (tmp == s[i]) {
            me++;
        }
        else {
            you++;
        }
        if (me == you) {
            me = you = 0;
            answer++;
            tmp = s[i + 1];
        }
        else if (i == s.size() - 1 && me != you) {
            answer++;
        }
    }

    return answer;
}