//https://school.programmers.co.kr/learn/courses/30/lessons/120871

#include <string>
#include <vector>

using namespace std;

int Have_3(int n) {
    string s = to_string(n);
    for (auto i : s) {
        if (i == '3')
            return 1;
    }
    return 0;
}

int div3(int n) {
    if (n % 3 == 0)
        return 1;
    return 0;
}

int solution(int n) {
    int answer = 0;
    for (int i = 1; i <= n; i++) {
        answer++;
        while (Have_3(answer) || div3(answer)) {
            answer++;
        }

    }
    return answer;
}