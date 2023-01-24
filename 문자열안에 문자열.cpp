//https://school.programmers.co.kr/learn/courses/30/lessons/120908

#include <string>
#include <vector>

using namespace std;

int solution(string str1, string str2) {
    return str1.find(str2) != string::npos ? 1 : 2;
}