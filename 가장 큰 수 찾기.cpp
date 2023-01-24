//https://school.programmers.co.kr/learn/courses/30/lessons/120899

#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> array) {

    int max;
    max = array[0];
    vector<int> answer(2);
    answer[0] = max;
    answer[1] = 0;
    for (int i = 1; i < array.size(); i++) {
        if (array[i] > max) {
            max = array[i];
            answer[0] = max;
            answer[1] = i;
        }
    }
    return answer;
}