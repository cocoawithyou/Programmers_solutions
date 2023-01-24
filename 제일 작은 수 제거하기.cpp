//https://school.programmers.co.kr/learn/courses/30/lessons/12935

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer = { -1 };
    if (arr.size() == 1)
        return answer;
    int small = arr[0];
    for (auto i : arr) {
        small = min(small, i);
    }
    auto it = find(arr.begin(), arr.end(), small);
    arr.erase(it);
    return arr;
}