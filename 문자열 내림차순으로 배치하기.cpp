//https://school.programmers.co.kr/learn/courses/30/lessons/12917

#include <string>
#include <vector>
#include <algorithm>
using namespace std;
bool cmp(char a, char b) {
    if (isupper(b))
        return a > b;
    return a > b;
}

string solution(string s) {
    string answer = "";
    sort(s.begin(), s.end(), cmp);
    return s;
}