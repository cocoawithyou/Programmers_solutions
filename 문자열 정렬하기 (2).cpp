//https://school.programmers.co.kr/learn/courses/30/lessons/120911

#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(string my_string) {
    for (auto& i : my_string)
        if (isupper(i))
            i = tolower(i);
    sort(my_string.begin(), my_string.end());
    return my_string;
}