//https://school.programmers.co.kr/learn/courses/30/lessons/120839

#include <string>
#include <vector>

using namespace std;

string solution(string rsp) {
    string answer = "";
    for (auto i : rsp) {
        if (i == '2')
            answer += '0';
        else if (i == '5')
            answer += '2';
        else
            answer += '5';
    }
    return answer;
}