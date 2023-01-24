//https://school.programmers.co.kr/learn/courses/30/lessons/64061

#include <string>
#include <vector>
#include <stack>
using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    int answer = 0;
    stack<int> st;
    int now = 0, last = 0;
    for (auto i : moves) {
        int j = 0;
        while (board[board.size() - 1][i - 1] != 0 && j < board.size()) {
            if (board[j][i - 1] == 0)
                j++;
            else {
                now = board[j][i - 1];
                if (now == last) {
                    st.pop();
                    if (!st.empty())
                        last = st.top();
                    else
                        last = 0;
                    answer += 2;
                }
                else {
                    st.push(now);
                    last = st.top();
                }
                board[j][i - 1] = 0;
                break;
            }
        }
    }
    return answer;
}
