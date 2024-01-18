#include <iostream>
using namespace std;

int main()
{
    int v1 = 10;
    cout << "Before try block" << endl;
    try
    {
        cout << "Inside try block" << endl;
        if (v1 < 100)
        {
            throw v1;
            cout << "After exception is block-thrown exception" << endl;
        }
    }
    catch (int v1)
    {
        cout << "Exception Caught" << endl;
    }
    return 0;
}