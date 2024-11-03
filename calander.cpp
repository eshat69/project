#include<bits/stdc++.h>
using namespace std;
int main() {
    char month[12][4] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int i, j, totalDays, weekend = 0, space = 0, year;
    cout << "Enter the year: ";
    cin >> year;
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        daysInMonth[1] = 29;
    }
    for (i = 0; i < 12; i++) {
        cout << "Month: " << month[i] << endl;
        cout << "Sun\tMon\tTue\tWed\tThu\tFri\tSat" << endl;

        for (space = 1; space <= weekend; space++) {
            cout << "\t";
        }
        totalDays = daysInMonth[i];
        for (j = 1; j <= totalDays; j++) {
            cout << j << "\t";
            weekend++;
            if (weekend > 6) {
                weekend = 0;
                cout << endl;
            }
        }
        cout << endl;
    }
    return 0;
}

