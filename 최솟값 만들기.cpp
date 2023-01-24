//https://school.programmers.co.kr/learn/courses/30/lessons/12941

#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;

int solution(vector<int> A, vector<int> B)
{
    int answer = 0;
    int n = A.size();
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    for (int i = 0; i < A.size(); i++) {
        answer += A[n - 1 - i] * B[i];
    }
    return answer;
}