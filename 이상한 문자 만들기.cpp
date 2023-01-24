//https://school.programmers.co.kr/learn/courses/30/lessons/12930

#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int j = 0;
    for (auto i : s) {
        if (isalpha(i)) {
            if (j % 2 == 0) {
                answer.append(1, toupper(i));
            }
            else {
                answer.append(1, tolower(i));
            }
            j++;
        }
        else {
            j = 0;
            answer.append(1, i);
        }
    }
    return answer;
}