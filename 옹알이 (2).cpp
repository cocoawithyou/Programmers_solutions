//https://school.programmers.co.kr/learn/courses/30/lessons/133499

#include <string>
#include <vector>

using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
    vector<string> cute = { "aya", "ye", "woo", "ma" };
    for (auto i : babbling) {
        int k = 0;
        for (auto j : cute) {

            while (i.find(j) != string::npos) {
                i.replace(i.find(j), j.length(), to_string(k));
            }
            k++;
        }
        bool check = true;
        char last;
        for (int a = 0; a < i.size(); a++) {
            if (!isdigit(i[a])) {
                check = false;
                break;
            }
            if (a == 0)
                last = i[a];
            else {
                if (i[a] == last) {
                    check = false;
                    break;
                }
                else {
                    last = i[a];
                }
            }
        }
        if (check)
            answer++;
    }
    return answer;
}