//https://school.programmers.co.kr/learn/courses/30/lessons/132267

#include <string>
#include <vector>

using namespace std;
int cola(int a, int b, int n) {
    if (n < a)
        return 0;
    int count = b * (n / a);
    return count + cola(a, b, count + n % a);
}
int solution(int a, int b, int n) {
    int answer = cola(a, b, n);
    return answer;
}