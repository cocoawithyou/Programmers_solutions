//https://school.programmers.co.kr/learn/courses/30/lessons/12909

#include<string>
#include <stack>
#include <iostream>

using namespace std;

bool solution(string s)
{
    stack<char> st;
    if (s[0] == ')')
        return false;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '(') {
            st.push(s[i]);
        }
        else
        {
            if (!st.empty())
                st.pop();
            else
                return false;
        }
    }
    if (!st.empty())
        return false;
    return true;
}