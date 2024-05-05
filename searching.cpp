#include <iostream>
#include <vector>

class Search {
    int N; // size of array
    std::vector<int> arr;
    int to_search;
public:
    Search(int x, const std::vector<int>& y, int z) {
        N = x;
        arr = y;
        to_search = z;
    }

    int linearSearch() {
        for (int i = 0; i < N; i++) {
            if (arr[i] == to_search) {
                return i;
            }
        }
        return -1;
    }

    int binarySearch() {
        int left_ptr = 0;
        int right_ptr = N-1;
        int middle_ptr = (left_ptr + right_ptr)/2;

        while(left_ptr<=right_ptr) {
            if (arr[middle_ptr] == to_search) {
                return middle_ptr;
            }
            else if (arr[middle_ptr]>to_search) {
                right_ptr = middle_ptr - 1;
            }
            else {
                left_ptr = middle_ptr + 1;
            }

            middle_ptr = (left_ptr+right_ptr)/2;
        }
        return -1;
    }
};

int main() {
    int size, to_find;
    std::cout << "Enter size of array" << std::endl;
    std::cin >> size;
    std::vector<int> arr(size);
    std::cout << "Enter elements of this array" << std::endl;
    for (int i = 0; i < size; i++) {
        std::cin >> arr[i];
    }
    std::cout << "Enter element to find" << std::endl;
    std::cin >> to_find;

    // Initialize search object
    Search search_obj(size, arr, to_find);

    // Linear Search

    int index = search_obj.linearSearch();
    if (index >-1) {
    std::cout << "This element is at index: " << index << std::endl;

    }
    else {
    std::cout << "This element is not present in the array " << std::endl;

    }

    // Binary Search

    index = search_obj.binarySearch();

    if (index >-1) {
        std::cout << "This element is at index: " << index << std::endl;
    }
    else {
    std::cout << "This element is not present in the array " << std::endl;

    }

    return 0;
}