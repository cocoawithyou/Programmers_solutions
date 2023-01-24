//https://school.programmers.co.kr/learn/courses/30/lessons/12921

#include <string>
#include <vector>
#include <cmath>
#include <iostream>
using namespace std;

bool IsPrime(int n) {
    for (int i = 3; i <= sqrt(n); i += 2)
        if (n % i == 0)
            return false;
    return true;
}
int getPrime() {
    static int prime = 1;
    do {
        prime += 2;
    } while (!IsPrime(prime));
    return prime;
}
int solution(int n) {
    int answer = 0;
    int prime;
    while ((prime = getPrime()) <= n) {
        answer++;
    }
    return answer + 1;
}