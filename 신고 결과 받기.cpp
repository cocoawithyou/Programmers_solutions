//https://school.programmers.co.kr/learn/courses/30/lessons/92334

#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
#include <map>
#include <set>
using namespace std;

vector<int> solution(vector<string> id_list, vector<string> report, int k) {
    map<string, set<string>> m1;//신고자 별로 신고한 사람에 대한 set 만들기
    map<string, int>m2;//신고당한 사람의 신고누적횟수 저장용 map
    string a, b;
    vector<int>answer(id_list.size(), 0);
    for (const auto& i : report) {
        stringstream ss;
        ss.str(i);
        ss >> a >> b;
        if (m1[a].find(b) == m1[a].end()) {
            m1[a].insert(b);
            m2[b]++;
        }
    }

    for (auto j : m1) {//각 사용자별로
        for (auto q = j.second.begin(); q != j.second.end(); q++) {//신고자 set을 돌며 value가 
            if (m2[*q] >= k)//횟수가 K가 넘는다면
                answer[find(id_list.begin(), id_list.end(), j.first) - id_list.begin()]++;//정답에 1더하기
        }
    }
    return answer;
}