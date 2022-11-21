// use class template to sort integer array float array 

#include <iostream>
using namespace std;

template <class T>
class Sort {
    T *arr;
    int size;
    public:
    Sort(T *a, int s) {
        arr = a;
        size = s;
    }
    void sort() {
        for (int i = 0; i < size; i++) {
            for (int j = i + 1; j < size; j++) {
                if (arr[i] > arr[j]) {
                    T temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
    }
    void display() {
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    int a[] = {5, 4, 3, 2, 1};
    float b[] = {5.5, 1.1, 2.2, 3.3, 4.4};
    Sort<int> s1(a, 5);
    Sort<float> s2(b, 5);
    s1.sort();
    s2.sort();
    s1.display();
    s2.display();
    return 0;
}

