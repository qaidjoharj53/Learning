#include <iostream>

class MAT
{
private:
    int m, n;
    int **matrix;

public:
    MAT(int rows, int cols)
    {
        m = rows;
        n = cols;

        // Allocate memory for the matrix
        matrix = new int *[m];
        for (int i = 0; i < m; ++i)
        {
            matrix[i] = new int[n];
        }
    }

    // Function to input values into the matrix
    void inputMatrix()
    {
        std::cout << "Enter matrix elements:" << std::endl;
        for (int i = 0; i < m; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                std::cout << "Enter element [" << i + 1 << "][" << j + 1 << "]: ";
                std::cin >> matrix[i][j];
            }
        }
    }

    // Function to display the matrix
    void displayMatrix()
    {
        std::cout << "Matrix:" << std::endl;
        for (int i = 0; i < m; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                std::cout << matrix[i][j] << " ";
            }
            std::cout << std::endl;
        }
    }

    // Destructor to free memory
    ~MAT()
    {
        for (int i = 0; i < m; ++i)
        {
            delete[] matrix[i];
        }
        delete[] matrix;
    }

    // Additional matrix operations can be added as needed
};

int main()
{
    int rows, cols;

    // Input matrix dimensions
    std::cout << "Enter number of rows: ";
    std::cin >> rows;
    std::cout << "Enter number of columns: ";
    std::cin >> cols;

    // Create MAT object
    MAT matObj(rows, cols);

    // Input and display the matrix
    matObj.inputMatrix();
    matObj.displayMatrix();

    return 0;
}
