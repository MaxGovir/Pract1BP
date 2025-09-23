#include <iostream>
using namespace std;
int main()
{
    int sum = 0;
    for (int i = 1; i <= 5; i++)
    {
        int factorial = 1;
        for (int i2 = 1; i2 <= i; i2++)
        {
            factorial *= i2;
        }
        sum += factorial;
    }
    int average = sum / 5;
    cout << "Result = " << average << endl;
    return 0;
}