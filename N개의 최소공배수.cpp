//https://school.programmers.co.kr/learn/courses/30/lessons/12953

#include <string>
#include <vector>

using namespace std;
int getgcd(int a, int b) {
    if (b == 0) return a;
    return getgcd(b, a % b);
}

int solution(vector<int> arr) {
    int imsocute = 1;
    for (int i = 0; i < arr.size(); i++) {
        imsocute = imsocute / getgcd(arr[i], imsocute) * arr[i];
    }
    return imsocute;
}