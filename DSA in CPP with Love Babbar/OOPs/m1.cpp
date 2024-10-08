// Days of year
// saving 

#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

// Function to split a string by a delimiter
vector<string> split(const string &str, char delimiter) {
    vector<string> tokens;
    string token;
    istringstream tokenStream(str);
    while (getline(tokenStream, token, delimiter)) {
        tokens.push_back(token);
    }
    return tokens;
}

// Function to check if a year is a leap year
bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// Function to get the total number of days in a month
int getDaysInMonth(int year, int month) {
    vector<int> daysInMonth = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (isLeapYear(year)) {
        daysInMonth[1] = 29; // February has 29 days in a leap year
    }
    return daysInMonth[month - 1];
}

// Function to calculate the day of the year for a given date
int dayOfYear(int year, int month, int day) {
    int dayOfYear = 0;
    for (int i = 1; i < month; ++i) {
        dayOfYear += getDaysInMonth(year, i);
    }
    dayOfYear += day;
    return dayOfYear;
}

// Function to calculate total savings until the given date
int solve(string data) {
    vector<string> dateParts = split(data, '/');
    int year = stoi(dateParts[0]);
    int month = stoi(dateParts[1]);
    int day = stoi(dateParts[2]);

    int dayOfYearValue = dayOfYear(year, month, day);
    int totalSavings = dayOfYearValue * 10;

    return totalSavings;
}

int main() {
    string date;
    getline(cin, date);

    int result = solve(date);
    cout << result << endl;

    return 0;
}
