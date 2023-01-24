//https://school.programmers.co.kr/learn/courses/30/lessons/120893

#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";
    for (auto i : my_string) {
        if (islower(i))
            answer += toupper(i);
        else
            answer += tolower(i);
    }
    return answer;
}