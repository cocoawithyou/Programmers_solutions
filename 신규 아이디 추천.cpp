//https://school.programmers.co.kr/learn/courses/30/lessons/72410

#include <string>
#include <vector>

using namespace std;

string solution(string new_id) {
    string answer = "";
    //1�ܰ�
    for (auto& i : new_id) {
        if (isalpha(i))
            i = tolower(i);
    }
    //2�ܰ�
    for (auto& i : new_id) {
        if (isalpha(i) || isdigit(i) || i == '-' || i == '_' || i == '.')
            answer += i;
        else
            continue;
    }
    //3�ܰ�
    for (int i = 0; i < answer.length(); i++) {
        if (answer[i] == '.') {
            int j = i;
            while (answer[j] == '.') {
                j++;
            }
            answer.replace(i, j - i, ".");
        }
    }
    //4�ܰ�
    if (answer.front() == '.')
        answer.erase(0, 1);
    else if (answer.back() == '.')
        answer.pop_back();

    //5�ܰ�
    if (answer.empty())
        answer += "a";
    //6�ܰ�
    if (answer.length() >= 16)
        answer.erase(answer.begin() + 15, answer.end());
    if (answer.back() == '.')
        answer.pop_back();
    //7�ܰ�
    if (answer.length() <= 2)
        do { answer += answer.back(); } while (answer.length() < 3);

    return answer;
}
