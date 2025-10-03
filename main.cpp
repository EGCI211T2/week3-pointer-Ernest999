#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main(int argc, char *argv[]) {
    int n = argc - 1; 
    int *pa = new int[n];
    int i, temp;


    int *pstart = pa;


    for (i = 0; i < n; i++) {
        pa[i] = atoi(argv[i + 1]);
    }

    cout << "Original: ";
    for (i = 0; i < n; i++) {
        cout << setw(3) << pa[i];
    }
    cout << endl;

    for (i = 0; i < n / 2; i++) {
        temp = pa[i];
        pa[i] = pa[n - 1 - i];
        pa[n - 1 - i] = temp;
    }

    cout << "Reversed: ";
    for (i = 0; i < n; i++) {
        cout << setw(3) << pa[i];
    }
    cout << endl;

    delete[] pstart;
    return 0;
}
