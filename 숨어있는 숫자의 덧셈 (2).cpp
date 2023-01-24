//https://school.programmers.co.kr/learn/courses/30/lessons/120864

#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(string my_string) {
    int answer = 0;
    for (int i = 0; i < my_string.length(); i++) {
        int tmp, j;
        tmp = j = 0;
        while (isdigit(my_string[i]) != 0) {
            if (j++)
                tmp *= 10;
            tmp += my_string[i++] - '0';
        }
        cout << tmp << endl;
        answer += tmp;
    }
    return answer;
}