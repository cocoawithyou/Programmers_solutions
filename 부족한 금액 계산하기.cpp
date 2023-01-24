//https://school.programmers.co.kr/learn/courses/30/lessons/82612

using namespace std;

long long solution(int price, int money, int count)
{
    long long answer = 0;
    int i = 1;
    while (i <= count) {
        answer += price * i++;
    }
    if (answer <= money)
        return 0;
    return answer - money;
}