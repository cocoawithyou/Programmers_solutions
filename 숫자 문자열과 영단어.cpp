//https://school.programmers.co.kr/learn/courses/30/lessons/81301

#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    vector<string> c = { "zero","one","two","three","four","five","six","seven","eight","nine" };
    int j = 0;
    for (auto i : c) {
        while (s.find(i) != string::npos) {
            s.replace(s.find(i), i.length(), to_string(j));
        }
        j++;
    }
    return stoi(s);
}