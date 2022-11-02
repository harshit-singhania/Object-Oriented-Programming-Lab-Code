// Create a class to store an integer array. Overload insertion and extraction operator to
// input and display the array elements.

#include <iostream>
using namespace std;

class Array
{
    public: 
        int *arr;
        int size;
        Array(int size)
        {
            this->size = size;
            arr = new int[size];
        }
        friend istream &operator>>(istream &input, Array &a);
        friend ostream &operator<<(ostream &output, Array &a);
};

istream &operator>>(istream &input, Array &a)
{
    for (int i = 0; i < a.size; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        input >> a.arr[i];
    }
    return input;
}

ostream &operator<<(ostream &output, Array &a)
{
    for (int i = 0; i < a.size; i++)
    {
        output << a.arr[i] << " ";
    }
    return output;
}

int main()
{
    int size;
    cout << "Enter size of array: ";
    cin >> size;
    Array a(size);
    cin >> a;
    cout << "Array: " << a;
    return 0;
}



