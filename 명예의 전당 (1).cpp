//https://school.programmers.co.kr/learn/courses/30/lessons/138477

#include <string>
#include <vector>
#include <queue>
#include <iostream>


using namespace std;

vector<int> solution(int k, vector<int> score) {
    priority_queue<int> pq;
    vector<int> answer;
    int i = 0;
    while (i < score.size()) {
        if (i < k) {
            pq.push(-1 * score[i]);
        }
        else {
            if (pq.top() > -1 * score[i]) {
                pq.pop();
                pq.push(-1 * score[i]);
            }
        }
        answer.emplace_back(-1 * pq.top());
        i++;
    }
    return answer;
}