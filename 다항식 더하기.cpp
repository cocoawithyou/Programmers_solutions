//https://school.programmers.co.kr/learn/courses/30/lessons/120863

#include <string>
#include <vector>
#include <sstream>
using namespace std;

string solution(string polynomial) {
    string answer = "";
    stringstream ss;
    ss.str(polynomial);
    string tmp;
    int coe, con;
    coe = con = 0;
    while (ss >> tmp) {
        if (tmp == "+")
            continue;
        else if (tmp.find("x") != string::npos) {
            if (tmp.size() == 1) {
                coe += 1;
            }
            else {
                tmp.pop_back();
                coe += stoi(tmp);
            }
        }
        else {
            con += stoi(tmp);
        }
    }

    string plus = " + ";
    if (coe == 0 && con == 0) {
        return "0";
    }

    if (coe == 0) {
        answer += to_string(con);
        return answer;
    }
    else if (coe == 1) {
        answer += "x";
        if (con == 0)
            return answer;
        else
            answer += plus + to_string(con);
    }
    else {
        answer += to_string(coe) + "x";
        if (con == 0)
            return answer;
        else
            answer += plus + to_string(con);
    }
    return answer;
}