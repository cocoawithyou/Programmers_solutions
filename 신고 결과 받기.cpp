//https://school.programmers.co.kr/learn/courses/30/lessons/92334

#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
#include <map>
#include <set>
using namespace std;

vector<int> solution(vector<string> id_list, vector<string> report, int k) {
    map<string, set<string>> m1;//�Ű��� ���� �Ű��� ����� ���� set �����
    map<string, int>m2;//�Ű���� ����� �Ű���Ƚ�� ����� map
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

    for (auto j : m1) {//�� ����ں���
        for (auto q = j.second.begin(); q != j.second.end(); q++) {//�Ű��� set�� ���� value�� 
            if (m2[*q] >= k)//Ƚ���� K�� �Ѵ´ٸ�
                answer[find(id_list.begin(), id_list.end(), j.first) - id_list.begin()]++;//���信 1���ϱ�
        }
    }
    return answer;
}