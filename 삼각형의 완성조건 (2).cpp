//https://school.programmers.co.kr/learn/courses/30/lessons/120868

#include <string>
#include <vector>

using namespace std;

int solution(vector<int> sides) {
    int answer = 0;
    int l = sides[0] > sides[1] ? sides[0] : sides[1];
    int s = sides[0] < sides[1] ? sides[0] : sides[1];
    for (int i = l; i + s > l; i--)
        answer++;

    for (int i = l + 1; i < l + s; i++)
        answer++;
    return answer;
}