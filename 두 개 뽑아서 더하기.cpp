//https://school.programmers.co.kr/learn/courses/30/lessons/68644

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    for (int i = 0; i < numbers.size(); i++) {
        for (int j = i + 1; j < numbers.size(); j++) {
            if (find(answer.begin(), answer.end(), numbers[i] + numbers[j]) == answer.end())
                answer.emplace_back(numbers[i] + numbers[j]);
        }
    }
    sort(answer.begin(), answer.end());
    return answer;
}