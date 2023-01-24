//https://school.programmers.co.kr/learn/courses/30/lessons/67256

#include <string>
#include <vector>

using namespace std;
int dis(vector<int> v1, vector<int> v2) {
    return abs(v1[0] - v2[0]) + abs(v1[1] - v2[1]);
}

string solution(vector<int> numbers, string hand) {
    string answer = "";
    vector<vector<int>> v =
    { {0,3},{1,3},{2,3},{0,2},{1,2},{2,2},{0,1},{1,1},{2,1},{0,0},{1,0},{2,0} };
    int last_l = 10, last_r = 12;
    for (auto i : numbers) {
        if (i == 1 || i == 4 || i == 7) {
            answer += "L";
            last_l = i;
        }
        else if (i == 3 || i == 6 || i == 9) {
            answer += "R";
            last_r = i;
        }
        else {
            if (i == 0) {
                i = 11;
            }
            if (last_l == 10 && last_r == 12) {
                if (hand == "right") {
                    answer += "R";
                    last_r = i;
                }
                else {
                    answer += "L";
                    last_l = i;
                }
            }
            else {

                if (dis(v[last_r - 1], v[i - 1]) < dis(v[last_l - 1], v[i - 1])) {
                    answer += "R";
                    last_r = i;
                }
                else if (dis(v[last_r - 1], v[i - 1]) > dis(v[last_l - 1], v[i - 1])) {
                    answer += "L";
                    last_l = i;
                }
                else {
                    if (hand == "right") {
                        answer += "R";
                        last_r = i;
                    }
                    else {
                        answer += "L";
                        last_l = i;
                    }
                }
            }
        }
    }
    return answer;
}