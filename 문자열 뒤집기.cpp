//https://school.programmers.co.kr/learn/courses/30/lessons/120822

#include <string>
#include <vector>
#include<algorithm>
using namespace std;

string solution(string my_string) {
    reverse(my_string.begin(), my_string.end());
    string answer(my_string);
    return answer;
}