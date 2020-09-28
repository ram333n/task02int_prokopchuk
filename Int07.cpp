#include <iostream>
using namespace std;

int main()
{
    int ab = 24;
    int sum = ab / 10 + ab % 10;
    int sub = (ab / 10) * (ab % 10);
    cout << "sum = " << sum << endl;
    cout << "sub = " << sub << endl;
}