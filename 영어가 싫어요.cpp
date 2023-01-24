//https://school.programmers.co.kr/learn/courses/30/lessons/120894

#include <string>
#include <vector>
#include <sstream>

using namespace std;

long long solution(string numbers) {
    long long answer = 0;

    vector<string> v = { "zero", "one", "two", "three", "four",
                        "five", "six", "seven", "eight", "nine" };

    vector<string> v1 = { "0", "1", "2", "3", "4",
                        "5", "6", "7", "8", "9" };

    int j = 0;
    for (auto i : v) {
        bool check = true;
        while (check) {
            if (numbers.find(i) != string::npos)
                numbers.replace(numbers.find(i), i.length(), v1[j]);
            else
                check = false;
        }
        j++;
    }

    stringstream ss;
    ss.str(numbers);
    ss >> answer;

    return answer;
}