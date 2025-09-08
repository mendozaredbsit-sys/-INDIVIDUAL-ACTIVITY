#include <iostream>
using namespace std;

int main() {
    int hours, minutes;
    cout << "Input hours: ";
    cin >> hours;
    cout << "Input minutes: ";
    cin >> minutes;

    int totalMinutes = (hours * 60) + minutes;
    cout << "Total: " << totalMinutes << " minutes" << endl;

    return 0;
}