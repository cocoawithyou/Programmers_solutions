//https://school.programmers.co.kr/learn/courses/30/lessons/120921

#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string A, string B) {
    if (A.compare(B) == 0)
        return 0;

    bool check = false;

    int i = 1;
    while (i < A.length()) {
        string tmp(A);
        string s = "";
        for (int k = A.length() - i; k < A.length(); k++) {
            s += tmp[k];
        }

        for (int m = 0; m < A.length() - i; m++) {
            s += tmp[m];
        }

        cout << s << endl;
        if (s.compare(B) == 0) {
            check = true;
            break;
        }
        i++;
    }

    if (!check)
        return -1;

    return i;
}