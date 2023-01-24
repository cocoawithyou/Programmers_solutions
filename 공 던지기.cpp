//https://school.programmers.co.kr/learn/courses/30/lessons/120843

#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<int> numbers, int k) {
    int answer = 0;
    int size = numbers.size();
    int idx = 0;
    while (k - 1 > 0) {
        idx += 2;
        cout << "idx: " << idx << endl;
        if (idx >= size)
            idx -= size;
        k--;
    }
    return numbers[idx];
}