//https://school.programmers.co.kr/learn/courses/30/lessons/120861

#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> keyinput, vector<int> board) {
    vector<int> answer(2, 0);
    for (auto i : keyinput) {
        if (i == "up") {
            if (board[1] / 2 > answer[1])
                answer[1]++;
        }
        else if (i == "down") {
            if (board[1] / -2 < answer[1])
                answer[1]--;
        }
        else if (i == "right") {
            if (board[0] / 2 > answer[0])
                answer[0]++;
        }
        else if (i == "left") {
            if (board[0] / -2 < answer[0])
                answer[0]--;
        }
    }
    return answer;
}