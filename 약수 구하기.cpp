//https://school.programmers.co.kr/learn/courses/30/lessons/120897

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

vector<int> solution(int n) {
    vector<int> answer;
    if (IsPrime(n)) {
        answer = { 1,n };
    }
    else {
        for (int i = 1; i <= n; i++)
            if (n % i == 0)
                answer.emplace_back(i);
    }

    return answer;
}