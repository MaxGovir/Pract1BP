#include <iostream>
using namespace std;
int main()
{
    int A = 75;
    int B = 5;
    std::cout << "A=" << A << "; B=" << B << endl;
    int temp = A;
    A = B;
    B = temp;
    std::cout << "A=" << A << ", B=" << B << endl;
    return 0;
}