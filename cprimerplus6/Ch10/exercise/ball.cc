/*
 * @Author: tangxiao
 * @Date: 2022-12-06 19:08:12
 * @LastEditTime: 2022-12-06 20:15:16
 * @LastEditors: tangxiao
 * @Copyright: 2022 FT. All right reserved.
 * @Description: Do not edit
 */
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
struct Ball {
    string grade;
    double lpcent;
};
bool com(const Ball x, const Ball y) {
    if (x.lpcent == y.lpcent)
        return x.lpcent < y.lpcent;
    return x.lpcent < y.lpcent;
}
void PrintBall(const Ball *ball, int n) {
    for (int i = 0; i < n; i++) {
        cout << ball[i].grade << "\t" << ball[i].lpcent << endl;
    }
}
int main() {
    Ball score[] = {
        {"1：0", 5.5},
        {"2：0", 6.8},
        {"2：1", 7.25},
        {"3：0", 13},
        {"3：1", 15},
        {"3：2", 35},
        {"4：0", 35},
        {"4：1", 40},
        {"4：2", 70},
        {"5：0", 80},
        {"5：1", 80},
        {"5：2", 200},
        {"0：0", 8.5},
        {"1：1", 5.9},
        {"2：2", 17},
        {"3：3", 100},
        {"0：1", 10},
        {"0：2", 23},
        {"1：2", 13},
        {"0：3", 60},
        {"1：3", 45},
        {"2：3", 60},
        {"0：4", 250},
        {"1：4", 150},
        {"2：4", 200},
        {"0：5", 700},
        {"1：5", 600},
        {"2：5", 600}};

    Ball tg[] = {
        {"0 ", 8.5},
        {"1 ", 4.1},
        {"2 ", 3.05},
        {"3 ", 3.8},
        {"4 ", 6.5},
        {"5 ", 13},
        {"6 ", 24},
        {"7+", 35}};

    Ball hf[] = {
        {"胜/胜", 2.7},
        {"胜/平", 18},
        {"胜/负", 35},
        {"平/胜", 4.1},
        {"平/平", 4.7},
        {"平/负", 9},
        {"负/胜", 25},
        {"负/平", 18},
        {"负/负", 7.35}};


    sort(score, score + sizeof(score) / sizeof(score[0]), com);
    PrintBall(score, sizeof(score) / sizeof(score[0]));
    sort(tg, tg + sizeof(tg) / sizeof(tg[0]), com);
    PrintBall(tg, sizeof(tg) / sizeof(tg[0]));
    sort(hf, hf + sizeof(hf) / sizeof(hf[0]), com);
    PrintBall(hf, sizeof(hf) / sizeof(hf[0]));

    return 0;
}