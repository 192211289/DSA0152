#include <iostream>
#include <stdexcept>

class Array {
private:
    int* data;
    int size;

public:
    Array(int size) : size(size) {
        data = new int[size];
    }

    ~Array() {
        delete[] data;
    }

    int& operator[](int index) {
        if (index < 0 || index >= size) {
            throw std::out_of_range("Index out of bounds");
        }
        return data[index];
    }

    const int& operator[](int index) const {
        if (index < 0 || index >= size) {
            throw std::out_of_range("Index out of bounds");
        }
        return data[index];
    }

    int getSize() const {
        return size;
    }
};

int main() {
    int size = 5;
    Array arr(size);

    for (int i = 0; i < size; ++i) {
        arr[i] = i * 10;
    }

    for (int i = 0; i < size; ++i) {
        std::cout << "arr[" << i << "] = " << arr[i] << std::endl;
    }

    return 0;
}

