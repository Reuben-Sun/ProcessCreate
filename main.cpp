#include <iostream>
#include <unistd.h>
using namespace std;

int main() {
    int p1 = fork();
    if (p1 == 0) {
        cout << 'B' << endl;
        return 0;
    }

    int p2 = fork();
    if (p2 == 0) {
        cout << 'C' << endl;
        return 0;
    }

    if (p1 > 0 && p2 > 0) {
        cout << 'A' << endl;
    }

//    getchar();
    return 0;
}
