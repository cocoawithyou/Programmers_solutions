//https://school.programmers.co.kr/learn/courses/30/lessons/120862

#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    int answer = numbers[0] * numbers[1];
    for (int i = 0; i < numbers.size(); i++) {
        for (int j = i + 1; j < numbers.size(); j++) {
            if (numbers[i] * numbers[j] > answer)
                answer = numbers[i] * numbers[j];
        }
    }
    return answer;
}