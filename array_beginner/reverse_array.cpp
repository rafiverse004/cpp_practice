#include <iostream>

int main() {
    int n;
    std::cout << "Enter array size: ";
    std::cin >> n;

    int arr[n];
    std::cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    int target;
    std::cout << "Enter element to search: ";
    std::cin >> target;

    int index = -1;

    for (int i = 0; i <n; i++) {
        if (arr[i] == target) {
            index = i;
            break;
        }
    }

    if (index != -1)
        std::cout << "Target found at index: " << index << std::endl;
    else
        std::cout << "Target not found (-1)" << std::endl;

    return 0;
}
