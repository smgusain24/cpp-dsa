#include <iostream>
#include <vector>


class Sort {
    int size;
    std::vector<int>& array;
    public:
        Sort(int x, std::vector<int>& y) : size(x), array(y) {}

        void bubbleSort() {
            for (int i=0; i<size-1; i++) {
                for (int j=0; j<size-1-i; j++) {
                    if (array[j]>array[j+1]) {
                        swapElements(array, j, j+1);
                    }
                }
            }
        }

    private:
        void  swapElements(std::vector<int>& array, int index1, int index2) {
            int temp;
            temp = array[index1];
            array[index1] = array[index2];
            array[index2] = temp;
        }
};



int main() {

    std::cout<<"Enter the size of array: "<<std::endl;
    int size;
    std::cin>>size;
    std::cout<<"Enter the elements of array: "<<std::endl;
    std::vector<int> array(size);
    for (int i=0;i<size;i++) {
        std::cin>>array[i];
    }
    Sort sort_obj(size, array);
    sort_obj.bubbleSort();

    for (int i:array) {
        std::cout<<i<<" ";
    }

    return 0;
}