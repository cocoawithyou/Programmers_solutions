//https://school.programmers.co.kr/learn/courses/30/lessons/12945

#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(int n) {
    int answer = 0;
    vector<int>fib = { 0,1,1 };
    for (int i = 2; i <= n; i++) {
        fib[2] = fib[1] + fib[0] % 1234567;
        fib[0] = fib[1] % 1234567;
        fib[1] = fib[2] % 1234567;
    }
    cout << fib[2] << endl;
    return fib[2];
}