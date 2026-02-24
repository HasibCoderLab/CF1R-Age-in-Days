/*============================================================
    Codeforces - CF1-R
    Problem : CF1R-Age-in-Days
    Contest :1 Data Types & Conditions
    Topic   : Data Types & Conditions
    File    : CF1R-Age-in-Days.cpp
    Author  : Hasib Hasan
============================================================*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;
    cin >> N;
    int years, remaining_days, months, days;
    years = N / 365;
    remaining_days = N % 365;
    months = remaining_days / 30;
    days = remaining_days % 30 ;
    cout <<years <<" years" << endl  <<months << " months" << endl<<days << " days";

           return 0;
}