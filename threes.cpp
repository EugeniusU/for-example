#include <iostream>
#include <vector>

int main() {
    int r;
    std::cin >> r;
    std::cout << std::endl;

    std::vector<int> Array;
    std::vector<std::vector<int>> Thirds;

    int num;
    int t;

    while ((std::cin >> num) && num != 0) {
        Array.push_back(num);
        std::cout << num << " this " << std::endl;
    }

    int finded = 0;
    std::vector<int> arr;

    for (int i = 0; i < Array.size() - 2; i++) {
        if (((0 <= abs(Array[i] - Array[i + 1])) && (abs(Array[i] - Array[i + 1])  <= r)) &&
            ((0 <= abs(Array[i + 1] - Array[i + 2])) && (abs(Array[i + 1] - Array[i + 2]) <= r))) {

            arr.push_back(Array[i]);
            arr.push_back(Array[i + 1]);
            arr.push_back(Array[i + 2]);

            finded = 3;
        } else {
            finded = 0;
            arr = {};
        }

        if ((finded == 3) && (arr.size() == 3)) {
            Thirds.push_back(arr);
            finded = 0;
            arr = {};
        }

    }

    if (Thirds.size() > 0) {
        for (int i = 0; i < Thirds.size(); i++) {
            for (int j = 0; j < Thirds[i].size(); j++) {
                std::cout << Thirds[i][j] << " ";
            }

            std::cout << std::endl;
        }
    } else {
        std::cout << "Not found" << std::endl;
    }

    return 0;
}
