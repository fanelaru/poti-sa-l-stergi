#include <string>
#include <iostream>
#include <format>
#include <array>

void cubeByReference(int* nPtr);

int main()
{
    // C-Strings
    char color[]{ "blue" }; //sau char color[]{'b', 'l', 'u', 'e', '\0'}
    const char* colorPtr{ "red" };

    int a{ 7 }; // initializare uniforma
    const int* aPtr{ &a };

    std::cout << "The address of a is " << &a << std::endl;
    std::cout << "The value of aPtr is " << aPtr << std::endl;
    std::cout << "The value of a is " << a << std::endl;
    std::cout << "The value of *aPtr is " << *aPtr << std::endl;

    std::cout << "Cubul lui " << a;
    cubeByReference(&a);
    std::cout << " este " << a << std::endl;

    // generic lambda
    const auto display{
        [](const auto& items) {
            for (const auto& item : items) {
                std::cout << std::format("{} ", item);
            }
        }
    };

    // to_array converts a built-in array to an std::array (C++20)
    const int c[5]{50, 20, 30, 20, 10};

    const auto array1{ std::to_array(c) };

    std::cout << std::format("array1.size() = {}\n", array1.size()) << "array1: ";
    display(array1);

    int y{ 0 };
    int* const yPtr{ &y };
    *yPtr = 100; // error
}

// Built-in arrays son't know their own size
int sumElements_v1(const int values[], size_t numberOfElements)
{

}

int sumElements_v2(const int* values, size_t numberOfElements)
{

}

void cubeByReference(int* nPtr)
{
    *nPtr = *nPtr * *nPtr * *nPtr;
}
