//https://school.programmers.co.kr/learn/courses/30/lessons/150370

#include <string>
#include <vector>
#include <sstream>
#include <iostream>

using namespace std;

vector<int> solution(string today, vector<string> terms, vector<string> privacies) {
    vector<int> answer;
    int t_year, t_month, t_day;
    t_year = stoi(today.substr(0, 4));
    t_month = stoi(today.substr(5, 2));
    t_day = stoi(today.substr(8, 2));
    cout << "today: " << t_year << t_month << t_day << endl;

    int k = 1;
    for (auto i : privacies) {
        for (auto j : terms) {
            if (j.front() == i.back()) {
                int year, month, day, tmp;
                char c;
                year = stoi(i.substr(0, 4));
                month = stoi(i.substr(5, 2));
                day = stoi(i.substr(8, 2));
                stringstream s;
                s.str(j);
                s >> c >> tmp;
                month += tmp;
                day--;
                if (day == 0) {
                    day = 28;
                    month--;
                }
                if (month == 0) {
                    month = 12;
                    year--;
                }
                else if (month > 12) {
                    while (month > 12) {
                        year++;
                        month -= 12;
                    }
                }
                cout << "유효기간 :" << year << " " << month << " " << day << endl;

                if (year > t_year) {
                    k++;
                    break;
                }
                else if (year < t_year) {
                    answer.emplace_back(k++);
                    break;
                }
                else {
                    if (month > t_month) {
                        k++;
                        break;
                    }
                    else if (month < t_month) {
                        answer.emplace_back(k++);
                        break;
                    }
                    else {
                        if (day >= t_day) {
                            k++;
                            break;
                        }
                        else {
                            answer.emplace_back(k++);
                            break;
                        }
                    }
                }
            }
        }
    }

    return answer;
}
