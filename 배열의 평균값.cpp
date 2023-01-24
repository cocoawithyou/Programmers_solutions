//https://school.programmers.co.kr/learn/courses/30/lessons/120817
#include <string>
#include <vector>
#include <numeric>

using namespace std;

double solution(vector<int> numbers) {
    double answer = 0;
    double count = numbers.size();
    answer = accumulate(numbers.begin(), numbers.end(), 0);
    return answer / count;
}