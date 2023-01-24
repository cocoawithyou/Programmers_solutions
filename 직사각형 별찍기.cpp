//https://school.programmers.co.kr/learn/courses/30/lessons/12969

#include <iostream>

using namespace std;
void Print(char c) {
    cout << c;
}
int main(void) {
    int a;
    int b;
    cin >> a >> b;
    for (int j = 0; j < b; j++) {
        for (int i = 0; i < a; i++) {
            Print('*');
        }
        Print('\n');
    }
    return 0;
}