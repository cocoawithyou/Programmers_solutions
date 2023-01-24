//https://school.programmers.co.kr/learn/courses/30/lessons/12922

#include <string>
#include <vector>

using namespace std;

string solution(int n) {
    string answer = "";
    int j = 1;
    while (j <= n) {
        if (j % 2 == 1) {
            answer += "¼ö";
        }
        else {
            answer += "¹Ú";
        }
        j++;
    }
    return answer;
}