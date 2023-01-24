//https://school.programmers.co.kr/learn/courses/30/lessons/42885

#include <string>
#include <vector>
#include <algorithm>
using namespace std;
bool cmp(int a, int b) {
    return a > b;
}
int solution(vector<int> people, int limit) {
    int answer = 0;
    if (people.size() == 1)
        return 1;
    int i, j;
    i = 0, j = people.size() - 1;
    int sum = limit;
    sort(people.begin(), people.end(), cmp);
    while (i != j) {
        if (sum - people[i] >= 0) {
            sum -= people[i];
            i++;
            continue;
        }
        else if (sum - people[j] >= 0) {
            sum -= people[j];
            j--;
        }
        else {
            sum = limit;
            answer++;
        }
    }
    i--;
    if (sum - people[i] >= 0)
        return answer + 1;
    return answer + 2;
}