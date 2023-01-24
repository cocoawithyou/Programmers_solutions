//https://school.programmers.co.kr/learn/courses/30/lessons/120883

#include <string>
#include <vector>

using namespace std;

string solution(vector<string> id_pw, vector<vector<string>> db) {
    string answer = "";
    int a = 0;

    for (auto i : db) {
        if (id_pw[0].compare(i[0]) == 0) {
            a = 1;
            if (id_pw[1].compare(i[1]) == 0)
                a = 2;
        }
        else {
            continue;
        }
    }
    if (a == 0)
        answer = "fail";
    else if (a == 1)
        answer = "wrong pw";
    else
        answer = "login";

    return answer;
}