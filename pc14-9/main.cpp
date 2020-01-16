/*
 * yufan xu 14-9
 */
#include <iostream>

using namespace std;

void moveDisks(int, string, string, string);

int main() {

    moveDisks(3, "peg 1", "peg 3", "peg 2" );
    cout <<"All the disks have been moved!";

    return 0;
}

void moveDisks(int n, string source, string dest, string temp) {
    if (n > 0) {
        moveDisks(n -1, source, temp, dest);

        cout << "Move a disk from " << source << " to " << dest << endl;
        moveDisks(n -1, temp, dest, source);
    }
}

