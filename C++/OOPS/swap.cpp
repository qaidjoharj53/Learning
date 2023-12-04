#include <iostream>
using namespace std;

class NumberSwapper
{

public:
    static int num1;
    static int num2;

    static void readNumbers()
    {
        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter second number: ";
        cin >> num2;
    }
    static void swapNumbers()
    {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }

    static void displayNumbers()
    {
        cout << "First number: " << num1 << endl;
        cout << "Second number: " << num2 << endl;
    }
};

int main()
{
    NumberSwapper::readNumbers();
    cout << "Before swapping:" << endl;
    NumberSwapper::displayNumbers();

    NumberSwapper::swapNumbers();
    cout << "After swapping:" << endl;
    NumberSwapper::displayNumbers();

    return 0;
}