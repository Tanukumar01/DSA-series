#include <iostream>

void printPattern(int n) {
    if (n < 3 || n % 2 == 0) {
        std::cout << "Input must be an odd number greater than or equal to 3." << std::endl;
        return;
    }

    // Top Pyramid
    int top_height = (n + 1) / 2;
    for (int i = 1; i <= top_height; ++i) {
        // Spaces for centering
        for (int j = 0; j < top_height - i; ++j) {
            std::cout << " ";
        }
        // Stars
        for (int j = 0; j < 2 * i - 1; ++j) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    // Middle Section
    int middle_height = n;
    int middle_row_index = (n - 1) / 2;
    for (int i = 0; i < middle_height; ++i) {
        if (i == middle_row_index) {
            // Central row with stars and an '@'
            int star_count = (n + 1) / 2; // This is a guess. Let's re-evaluate n=5 image. It has ***@***.
            // Let's use the pattern from the first problem's solution: a sequence of * and @.
            // No, this pattern is different.
            // Based on n=3: ***@***. n=5: *****@*****. This seems to be n stars, then @, then n stars.
            for (int j = 0; j < n; ++j) {
                std::cout << "*";
            }
            std::cout << "@";
            for (int j = 0; j < n; ++j) {
                std::cout << "*";
            }
        } else {
            // Other rows with two '@' symbols
            for (int j = 0; j < (n - 1) / 2; ++j) {
                std::cout << " ";
            }
            std::cout << "@";
            for (int j = 0; j < n - 2; ++j) {
                std::cout << " ";
            }
            std::cout << "@";
        }
        std::cout << std::endl;
    }

    // Bottom Pyramid - This seems to be an identical copy of the top pyramid
    for (int i = 1; i <= top_height; ++i) {
        for (int j = 0; j < top_height - i; ++j) {
            std::cout << " ";
        }
        for (int j = 0; j < 2 * i - 1; ++j) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}

int main() {
    int n;
    std::cout << "Enter an odd number (3 or greater): ";
    std::cin >> n;
    printPattern(n);
    return 0;
}