#include <iostream>
#include <iomanip>
#include <cmath>

int main()
{
    // Print table header
    std::cout << std::setw(10) << "x" << std::setw(15) << "e^x" << std::endl;
    std::cout << std::string(25, '-') << std::endl;

    // Print table of values
    for (double x = -2.0; x <= 2.0; x += 0.5)
    {
        double y = std::exp(x);
        std::cout << std::setw(10) << std::fixed << std::setprecision(2) << x
                  << std::setw(15) << std::setprecision(5) << y << std::endl;
    }

    return 0;
}
