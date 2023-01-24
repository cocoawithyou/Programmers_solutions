//https://school.programmers.co.kr/learn/courses/30/lessons/1845

#include <vector>
#include <map>
#include <iostream>
using namespace std;


int solution(vector<int> nums)
{
    int answer = 0;
    map<int, int> m;
    for (auto i : nums) {
        m[i]++;
    }
    int count = 0;
    for (auto i : m) {
        count++;
    }

    if (count > nums.size() / 2)
        return nums.size() / 2;
    return count;
}