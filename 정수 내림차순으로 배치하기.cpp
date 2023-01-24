//https://school.programmers.co.kr/learn/courses/30/lessons/12933

#include <string>
#include <vector>
#include <algorithm>
using namespace std;
bool cmp(int a, int b) {
    return a > b;
}
long long solution(long long n) {
    long long answer = 0;
    vector<long long> v;
    while (n > 0) {
        v.emplace_back(n % 10);
        n /= 10;
    }
    sort(v.begin(), v.end(), cmp);
    string s;
    for (auto i : v) {
        s += to_string(i);
    }
    answer = stol(s);
    return answer;
}