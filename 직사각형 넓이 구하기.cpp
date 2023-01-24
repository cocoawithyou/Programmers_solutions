//https://school.programmers.co.kr/learn/courses/30/lessons/120860

#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> dots) {
    int answer = 0;
    int garo, sero;
    vector<int>tmp;
    tmp.emplace_back(dots[0][0]);
    tmp.emplace_back(dots[0][1]);

    for (auto i : dots) {
        for (int j = 0; j < 2; j++) {
            if (i[j] != tmp[j]) {
                if (j == 0) {
                    garo = abs(i[j] - tmp[j]);
                }
                else {
                    sero = abs(i[j] - tmp[j]);
                }
            }
        }
    }
    return answer = garo * sero;
}