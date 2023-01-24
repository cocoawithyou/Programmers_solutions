//https://school.programmers.co.kr/learn/courses/30/lessons/68935

#include <string>
#include <vector>
#include <iostream>
#include <stack>

using namespace std;
void gogogo(int n, stack<char>& st) {
    if (n > 2)
        gogogo(n / 3, st);
    st.push(n % 3 + '0');
}

int solution(int n) {
    int answer = 0;
    stack<char> st;
    gogogo(n, st);
    string s = "";
    while (!st.empty()) {
        s.append(1, st.top());
        st.pop();
    }
    int fac = 1;
    while (!s.empty()) {
        answer += (s.back() - '0') * (fac);
        fac *= 3;
        s.pop_back();
    }

    return answer;
}