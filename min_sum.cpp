#include <iostream>

int* get(int *arr, int len);
void write(int *arr, int len);
int* change(int *arr, int len);

int main() {
    int len;
    std::cin >> len;
    std::cout << std::endl;

    int arr[len];
    int *so = &arr[0];
    int *a = get(so, len);

    write(a, len);
    write(change(a, len), len);

}

int* get(int *arr, int len) {
    int num;
    for (int i = 0; i < len; i++) {
        std::cin >> num;
        arr[i] = num;
    }
    return arr;
}

void write(int *arr, int len) {
    for (int i = 0; i < len; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int* change(int *arr, int len) {
    int minNum = arr[1] + arr[2];
    int current;

    for (int i = 0; i < len - 2; i++) {
        minNum = arr[i + 1] + arr[i + 2];
        for (int j = i; j < len - 1; j++) {
            current = arr[j] + arr[j + 1];
                if (j > i) {
                    if (current < minNum) {
                        minNum = current;
                    }
                }
        }

        arr[i] = minNum;
    }

    return arr;
}
