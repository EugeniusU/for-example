#include <iostream>
#include <string>

int main() {
//    char arr[25];
    std::string str[25];

    int s = 0;
    int n;

    std::cin >> n;
    std::cout << std::endl;

    while (s < 25) {
        int ch = std::cin.get();
        if ((ch == '\n') && s > 0) {
            break;
        }
        if (ch != ' ') {
            str[s] = ch;
            s++;
        }
    }

//    int arr2[25];
    std::string str2[25];
    int finded = 0;

    int q = 0;
    int f = 0;

    for (int i = 0; i < 25; i++) {
        for (int j = 1; j < 25; j++) {
            if ((str[i] == str[j])) {
                finded++;
            }
        }
        if (finded >= n) {
            for (int k = 0; k < 25; k++) {
                if (str2[k] != str[i]) {
                    f++;
                }
            }

            if (f == 25) {
                str2[q] = str[i];
                q++;
            }

            f = 0;
        }

        finded = 0;
    }

    if (q > 0) {
        for (int j = 0; j < q; j++) {
            std::cout << str2[j] << " ";
        }
    } else {
        std::cout << "Not found" << std::endl;
    }

    return 0;
}
