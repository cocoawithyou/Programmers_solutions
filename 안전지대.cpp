//https://school.programmers.co.kr/learn/courses/30/lessons/120866
//¤©¤· ¾î·Á¿üÀ½

#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> board) {
    int answer = 0;

    for (int i = 0; i < board.size(); i++) {
        for (int j = 0; j < board.size(); j++) {
            if (board[i][j] == 1) {
                for (int m = i - 1; m <= i + 1; m++) {
                    if (m<0 || m>board.size() - 1)
                        continue;
                    for (int n = j - 1; n <= j + 1; n++) {
                        if (n<0 || n>board.size() - 1)
                            continue;
                        if (board[m][n] == 0)
                            board[m][n] = 5;
                    }
                }
            }
        }
    }

    for (auto x : board) {
        for (auto y : x) {
            if (y == 0)
                answer++;
        }
    }
    return answer;
}