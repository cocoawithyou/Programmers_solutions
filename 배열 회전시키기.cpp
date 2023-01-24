//https://school.programmers.co.kr/learn/courses/30/lessons/120844

#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> numbers, string direction) {
    vector<int> answer;
    vector<int>::iterator it_s = numbers.begin();
    vector<int>::iterator it_e = numbers.end();
    if (direction == "right") {
        numbers.insert(it_s, *--it_e);
        numbers.pop_back();
    }
    else {
        numbers.emplace_back(*it_s);
        numbers.erase(numbers.begin());
    }


    return numbers;
}