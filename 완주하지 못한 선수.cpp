//https://school.programmers.co.kr/learn/courses/30/lessons/42576

#include <string>
#include <vector>
#include <map>
using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    map<string, int>m1;
    map<string, int>m2;
    for (auto i : participant) {
        m1[i]++;
    }
    for (auto i : completion) {
        m2[i]++;
    }
    for (auto i : m1) {
        if (i.second != m2[i.first])
            return i.first;
    }

}