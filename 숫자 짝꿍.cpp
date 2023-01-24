//https://school.programmers.co.kr/learn/courses/30/lessons/131128

#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
bool cmp(int a, int b) {
    return a > b;
}
string solution(string X, string Y) {
    string answer = "";
    vector<int>a(10, 0);
    vector<int>b(10, 0);
    int idx = 0;
    for (auto i : X) {
        a[i - '0']++;
    }
    for (auto i : Y) {
        b[i - '0']++;
    }
    for (int i = 9; i >= 0; i--) {
        if (a[i] < b[i]) {
            answer.append(a[i], i + '0');
        }
        else {
            answer.append(b[i], i + '0');
        }
    }
    if (answer.empty())
        return "-1";
    if (answer.front() == '0')
        return "0";
    return answer;
}