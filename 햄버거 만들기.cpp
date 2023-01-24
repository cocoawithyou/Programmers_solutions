//https://school.programmers.co.kr/learn/courses/30/lessons/133502

#include <string>
#include <vector>

using namespace std;

int solution(vector<int> ingredient) {
    int answer = 0;
    vector<int>tmp;

    for (auto i : ingredient) {

        tmp.emplace_back(i);
        if (i == 1 && tmp.size() > 3) {
            vector<int>::iterator it = tmp.end();
            if (*(it - 4) == 1 && *(it - 3) == 2 && *(it - 2) == 3 && *(it - 1) == 1) {
                answer++;
                tmp.erase(it - 4, it);
            }
        }
    }
    return answer;
}
