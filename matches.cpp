#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> Take(std::vector<int> Array, int k);
void each(std::vector<int> Array_f);

int main() {

    std::vector<int> arr{1, 2, 2, 1, 1, 2};
    std::vector<int> arr2{4, 4, 4, 5, 1, 5, 1};
    std::vector<int> arr3{1, 2, 3, 1, 2, 3, 4, 5, 4, 4, 4};

    std::vector<int> arr_f = Take(arr, 3);
    std::vector<int> arr_f2 = Take(arr2, 2);
    std::vector<int> arr_f3 = Take(arr3, 4);

    if ((arr_f.size() == 0) || (arr_f2.size() == 0) || (arr_f3.size() == 0)) {
        std::cout << "Not found" << std::endl;
    } else {
        each(arr_f);
        each(arr_f2);
        each(arr_f3);
    }

    return 0;
}

std::vector<int> Take(std::vector<int> Array, int k) {
    std::vector<int> Seq;
    int index = 0;
    int finded = k;

    for (int i = 0; i < Array.size(); i++) {
        finded = k;
        for (int j = 0; j < Array.size(); j++) {
            if ((Array[i] == Array[j]) && i != j) {
                --finded;
            }
        }

        if (finded == 1) {
            Seq.push_back(Array[i]);
        }
    }

    std::sort(Seq.begin(), Seq.end());
    Seq.erase(std::unique(Seq.begin(), Seq.end()), Seq.end());

    return Seq;
}

void each(std::vector<int> Array_f) {
    for (int i = 0; i < Array_f.size(); i++) {
        std::cout << Array_f[i] << " ";
    }
    std::cout << std::endl;
}
