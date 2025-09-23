#include <iostream>
using namespace std;
int main()
{
    int a1 = 4;
    int d = 2;

    double sum = 0;
    cout << "First 5 elements of the progression: " << endl;
    for (int n = 1; n <= 5; n++) {
        int an = a1 + (n - 1) * d;
        cout << an << " " << endl;
        sum += an;
    }
    cout << "Their sum = " << sum << endl;
    return 0;
}