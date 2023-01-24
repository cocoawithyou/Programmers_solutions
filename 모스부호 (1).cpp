//https://school.programmers.co.kr/learn/courses/30/lessons/120838

#include <string>
#include <vector>
#include <iostream>
#include <sstream>
using namespace std;

string solution(string letter) {
    string answer = "";
    vector<string>morse = { ".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.." };

    stringstream ss(letter);
    vector<string>words;
    string word;
    while (getline(ss, word, ' ')) {
        words.emplace_back(word);
    }

    for (auto i : words) {
        int k = 0;
        for (auto j : morse) {
            if (i.compare(j) == 0)
                answer += 'a' + k;
            k++;
        }
    }




    return answer;
}