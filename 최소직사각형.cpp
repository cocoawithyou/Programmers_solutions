//https://school.programmers.co.kr/learn/courses/30/lessons/86491

#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 0;
    int garo,sero;
    garo = 0;
    sero = 0;
    for(auto &i: sizes){
        int tmp;
        if(i[0]<i[1]){
            tmp=i[0];
            i[0]=i[1];
            i[1]=tmp;
        }

    }
    for(auto i:sizes){
        if(garo<i[0])
            garo = i[0];

         if(sero<i[1])
            sero = i[1];
        cout<<i[0]<<','<<i[1]<<endl;
    }

    return garo*sero;
}