//https://school.programmers.co.kr/learn/courses/30/lessons/120890

#include <string>
#include <vector>
#include <algorithm>


using namespace std;

int solution(vector<int> array, int n) {
    sort(array.begin(), array.end());
    int pos = 0;
    int c = abs(array[0] - n);
    for (int i = 1; i < array.size(); i++) {
        if (abs(array[i] - n) < c) {
            c = abs(array[i] - n);
            pos = i;
        }
    }

    return array[pos];
}