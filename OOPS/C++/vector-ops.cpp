#include <iostream>
#include <vector>

template <typename T>
class GenericVector
{
private:
    std::vector<T> elements;

public:
    // To create the vector
    void createVector(const std::initializer_list<T> &values)
    {
        elements.assign(values);
    }

    // To modify the value of a given element
    void modifyElement(int index, T value)
    {
        if (index >= 0 && index < elements.size())
        {
            elements[index] = value;
        }
        else
        {
            std::cout << "Invalid index." << std::endl;
        }
    }

    // To multiply by scalar value
    void multiplyByScalar(T scalar)
    {
        for (auto &element : elements)
        {
            element *= scalar;
        }
    }

    // To display the vector
    void displayVector() const
    {
        std::cout << "(";
        for (size_t i = 0; i < elements.size(); ++i)
        {
            std::cout << elements[i];
            if (i < elements.size() - 1)
            {
                std::cout << ", ";
            }
        }
        std::cout << ")" << std::endl;
    }
};

int main()
{
    // Example usage of the GenericVector class template
    GenericVector<int> intVector;
    intVector.createVector({10, 20, 30, 40});

    std::cout << "Original Vector: ";
    intVector.displayVector();

    intVector.modifyElement(2, 100);
    std::cout << "After modifying element at index 2: ";
    intVector.displayVector();

    intVector.multiplyByScalar(2);
    std::cout << "After multiplying by scalar 2: ";
    intVector.displayVector();

    return 0;
}
