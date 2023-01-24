//https://school.programmers.co.kr/learn/courses/30/lessons/134240

#include <string>
#include <vector>

using namespace std;

string solution(vector<int> food) {
    string answer = "0";
    int i = food.size() - 1;
    while (i > 0) {
        if (food[i] == 1) {
            i--;
            continue;
        }
        else {
            if (food[i] % 2 == 1)
                food[i]--;
            while (food[i] > 0) {
                if (food[i] % 2 == 0) {
                    answer = to_string(i) + answer;
                }
                else {
                    answer = answer + to_string(i);
                }
                food[i]--;
            }
        }
        i--;
    }
    return answer;
}