Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

#include <iostream>
using namespace std;

int main() {
    int totalSeconds;
    cin >> totalSeconds;

    int hours = totalSeconds / 3600;
    int minutes = (totalSeconds % 3600) / 60;
    int seconds = totalSeconds % 60;

    cout << hours << ":" << minutes << ":" << seconds << endl;

    return 0;
}
