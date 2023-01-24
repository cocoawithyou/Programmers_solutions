//https://school.programmers.co.kr/learn/courses/30/lessons/118666

#include <string>
#include <vector>
#include <map>
using namespace std;
string ans(map<char, int> m) {
    string answer;
    if (m['R'] == m['T']) {
        answer += "R";
    }
    else {
        answer += m['R'] > m['T'] ? "R" : "T";
    }

    if (m['C'] == m['F']) {
        answer += "C";
    }
    else {
        answer += m['C'] > m['F'] ? "C" : "F";
    }

    if (m['J'] == m['M']) {
        answer += "J";
    }
    else {
        answer += m['J'] > m['M'] ? "J" : "M";
    }

    if (m['A'] == m['N']) {
        answer += "A";
    }
    else {
        answer += m['A'] > m['N'] ? "A" : "N";
    }
    return answer;
}

string solution(vector<string> survey, vector<int> choices) {
    string answer = "";
    map<char, int> m;
    for (int i = 0; i < survey.size(); i++) {
        if (choices[i] - 4 < 0) {
            m[survey[i][0]] += abs(choices[i] - 4);
        }
        else if (choices[i] - 4 > 0) {
            m[survey[i][1]] += abs(choices[i] - 4);
        }
        else {
            m[survey[i][0]];
            m[survey[i][1]];
        }
    }


    return answer = ans(m);
}