// simple digital watch program in C++:

#include <iostream>
#include <ctime>

using namespace std;

int main() {
    time_t now;
    tm* ltm;

    while (true) {
        now = time(0);
        ltm = localtime(&now);

        cout << (ltm->tm_hour < 10 ? "0" : "") << ltm->tm_hour << ":";
        cout << (ltm->tm_min < 10 ? "0" : "") << ltm->tm_min << ":";
        cout << (ltm->tm_sec < 10 ? "0" : "") << ltm->tm_sec << endl;

        // Delay for 1 second
        for (int i = 0; i < 100000000; i++);

        // Clear the screen
        cout << "\033[2J\033[1;1H";
    }

    return 0;
}
