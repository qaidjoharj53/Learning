#include <iostream>
using namespace std;

int main()
{
    float N, D, R;
    cout << "Enter Numerator: ";
    cin >> N;
    cout << "Enter Denominator: ";
    cin >> D;
    try
    {
        if (D == 0)
            throw 0;
        R = N / D;
        cout << "Result: " << R << endl;
    }
    catch (int NDRexception)
    {
        cout << "Logical Error: Division by zero is not possible." << endl;
    }
    return 0;
}