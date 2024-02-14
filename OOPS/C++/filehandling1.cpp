#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream inputFile("input.txt");   // Replace "input.txt" with the source file name
    ofstream outputFile("output.txt"); // Replace "output.txt" with the destination file name

    if (!inputFile.is_open())
    {
        cerr << "Error: Unable to open the input file." << endl;
        return 1;
    }

    if (!outputFile.is_open())
    {
        cerr << "Error: Unable to open the output file." << endl;
        return 1;
    }

    char ch;
    while (inputFile.get(ch))
    {
        outputFile.put(ch);
    }

    cout << "File copied successfully." << endl;

    inputFile.close();
    outputFile.close();

    return 0;
}
