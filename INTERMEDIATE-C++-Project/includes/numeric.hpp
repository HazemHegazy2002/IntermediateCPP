#ifndef __numeric_HPP__ // Include guard to prevent multiple inclusions of this header
#define __numeric_HPP__

#include <string> // Include string for handling string objects
using namespace std; // Use standard namespace

// Define a custom class 'Custom' to demonstrate overloading the '-' operator
class Custom {
public:
    // Constructor that initializes the member variable 'm_b' with the given string
    Custom(string b) {
        m_b = b;
    }
    
    // Overloaded '-' operator to calculate the difference in length between two Custom objects
    int operator-(const Custom str2) {
        // Return the length difference between 'this' object's string and str2's string
        int size = (this->m_b).length() - (str2.m_b).length();
        return size;
    }

private:
    string m_b; // Member variable to hold a string
};

// Function template MAX_NUM with variadic templates to calculate the maximum among multiple arguments
template <typename T>
auto MAX_NUM(const T &a) {
    // Base case of recursion: if only one argument is provided, return it
    return a;
}

template <typename T, typename U, typename... Args>
auto MAX_NUM(const T &a, const U &b, const Args &...args) {
    // Compare 'a' and 'b', choose the larger one and pass it to the recursive call
    int max = (a > b) ? a : b;
    return MAX_NUM(max, args...); // Continue comparison with remaining arguments
}

// Function template MIN_NUM with variadic templates to calculate the minimum among multiple arguments
template <typename T>
auto MIN_NUM(const T &a) {
    // Base case of recursion: if only one argument is provided, return it
    return a;
}

template <typename T, typename U, typename... Args>
auto MIN_NUM(const T &a, const U &b, const Args &...args) {
    // Compare 'a' and 'b', choose the smaller one and pass it to the recursive call
    int min = (a < b) ? a : b;
    return MIN_NUM(min, args...); // Continue comparison with remaining arguments
}

// Function template Sub with variadic templates to perform subtraction over multiple arguments
template <typename T>
auto Sub(const T &a) {
    // Base case of recursion: if only one argument is provided, return it
    return a;
}

template <typename T, typename U, typename... Args>
auto Sub(const T &a, const U &b, const Args &...args) {
    // Subtract 'b' from 'a' and pass the result to the next call
    int sub_var = a - b;
    return Sub(sub_var, args...); // Continue subtraction with remaining arguments
}

#endif // End of include guard
