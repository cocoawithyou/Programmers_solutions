//https://school.programmers.co.kr/learn/courses/30/lessons/136798

#include <string>
#include <vector>
#include <cmath>
#include <iostream>

using namespace std;
int yaksu(int n) {
    int count = 0;
    for (int i = 1; i <= sqrt(n); i++)
        if (n % i == 0) {
            if (n / i == i)
                count++;
            else
                count += 2;
        }
    return count;
}
int solution(int number, int limit, int power) {
    int answer = 0;
    for (int i = 1; i <= number; i++) {
        cout << yaksu(i) << endl;
        if (yaksu(i) > limit)
            answer += power;
        else
            answer += yaksu(i);
    }
    return answer;
}