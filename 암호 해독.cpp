//https://school.programmers.co.kr/learn/courses/30/lessons/120892

#include <string>
#include <vector>

using namespace std;

string solution(string cipher, int code) {
    string answer = "";
    for (int i = 0; i < cipher.length(); i++)
        if ((i + 1) % code == 0)
            answer += cipher[i];
    return answer;
}