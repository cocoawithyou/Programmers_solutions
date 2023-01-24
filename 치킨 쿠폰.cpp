//https://school.programmers.co.kr/learn/courses/30/lessons/120884

#include <string>
#include <vector>

using namespace std;

int solution(int chicken) {
    int coupon = 0;
    int service = 0;
    int answer = 0;
    do {
        coupon += chicken;
        service = coupon / 10;
        coupon %= 10;
        chicken = service;
        answer += service;
    } while (service > 0);
    return answer;
}