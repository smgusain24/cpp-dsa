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
    Search search_obj(size, arr, to_find);
    std::cout << search_obj.linearSearch() << std::endl;

    return 0;
}