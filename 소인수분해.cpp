//https://school.programmers.co.kr/learn/courses/30/lessons/120852

#include <string>
#include <vector>
#include <cmath>
using namespace std;

int IsPrime(int n) {
    if (n < 2)
        return 0;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return 0;
    return 1;
}

int GetPrime() {
    static int prime;
    do { prime++; } while (!IsPrime(prime));
    return prime;
}

vector<int> solution(int n) {
    vector<int> answer;
    if (IsPrime(n))
    {
        answer.emplace_back(n);
        return answer;
    }

    int a;
    while (n > 1) {
        a = GetPrime();
        if (n % a == 0) {
            answer.emplace_back(a);
            while (n % a == 0)
                n /= a;
        }
    }
    return answer;
}