//https://school.programmers.co.kr/learn/courses/30/lessons/17681

#include <string>
#include <vector>
#include <iostream>

using namespace std;
string rev_to_bin(int n, int count) {
    string s;
    while (count > 0) {
        if (n % 2 == 0) {
            s += "0";
        }
        else {
            s += "1";
        }
        n /= 2;
        count--;
    }
    return s;
}

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;
    for (int i = 0; i < arr1.size(); i++) {
        string tmp;
        string s1 = rev_to_bin(arr1[i], n);
        string s2 = rev_to_bin(arr2[i], n);
        while (!s1.empty()) {
            if (s1.back() == '0' && s2.back() == '0') {
                tmp += " ";
            }
            else {
                tmp += "#";
            }
            s1.pop_back();
            s2.pop_back();
        }
        answer.emplace_back(tmp);
    }
    return answer;
}