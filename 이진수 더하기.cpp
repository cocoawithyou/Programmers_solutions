//https://school.programmers.co.kr/learn/courses/30/lessons/120885

#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

string solution(string bin1, string bin2) {
    string answer = "";
    long long a = stoi(bin1);
    long long b = stoi(bin2);
    long long c = a + b;
    cout << c << endl;
    string tmp = to_string(c);
    int carry = 0;
    cout << tmp << endl;
    int size = tmp.length();

    for (int i = 0; i < size; i++) {
        int num = tmp.back() - '0';
        if (carry + num > 1) {
            answer += ((carry + num) % 2) + '0';
            carry = 1;
        }
        else {
            answer += ((carry + num) % 2) + '0';
            carry = 0;
        }
        tmp.pop_back();
    }
    if (carry)
        answer += '1';
    reverse(answer.begin(), answer.end());
    return answer;
}