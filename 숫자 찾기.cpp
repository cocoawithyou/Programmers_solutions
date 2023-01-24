//https://school.programmers.co.kr/learn/courses/30/lessons/120904

#include <string>
#include <vector>

using namespace std;

int solution(int num, int k) {
    int answer = -1;
    string tmp = to_string(num);
    for (int i = 0; i < tmp.length(); i++) {
        if (tmp[i] == k + '0')
            return i + 1;
    }
    return answer;
}