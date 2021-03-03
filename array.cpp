#include <iostream>

int main() {
    int len = 0;
    int i = 0;
    int x;

    std::cout << "Input array's length ";
    std::cin >> len;
    std::cout << std::endl;

    int arr2[len];
//    std::cout << sizeof(arr2) << std::endl;
    std::cout << "\nInput array's elements " << std::endl;

    int q = 1;
    int whitespace = 0;

    while (whitespace != 2) {
        x = std::cin.get();

        if (whitespace == 1) {
            if ((x != ' ') && x != '\n') {
                if (q == 1) {
                    arr2[i] = (x - '0');
                    q = q * 10;
                } else {
                    arr2[i] = arr2[i] * q + (x - '0');
                }
            } else {
                q = 1;
                i++;
            }
        }

        if (x == '\n') {
            whitespace++;
        }

    }

    for (int j = 0; j < sizeof(arr2) / sizeof(arr2[0]); j++) {
        std::cout << arr2[j] << " ";
    }

    return 0;
}
