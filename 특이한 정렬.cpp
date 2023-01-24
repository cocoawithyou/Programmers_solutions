//https://school.programmers.co.kr/learn/courses/30/lessons/120880

#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> numlist, int n) {
    sort(numlist.begin(), numlist.end());
    stable_sort(numlist.begin(), numlist.end(), [n](int a, int b) {return abs(a - n) <= abs(b - n); });
    return numlist;
}
