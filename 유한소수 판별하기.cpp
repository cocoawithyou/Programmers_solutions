//https://school.programmers.co.kr/learn/courses/30/lessons/120878

#include <string>
#include <vector>
#include <iostream>

using namespace std;
int getgcd(int a, int b) {
    if (b == 0) return a;
    return getgcd(b, a % b);
}

int solution(int a, int b) {
    int newb = b / getgcd(a, b);
    bool check = true;
    while (newb % 2 == 0)
        newb /= 2;
    while (newb % 5 == 0)
        newb /= 5;

    if (newb == 1)
        return 1;
    return 2;

}