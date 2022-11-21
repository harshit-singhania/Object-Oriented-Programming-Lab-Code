#include <iostream> 
using namespace std;

class student {
    int m; 
    public:
    student();
    student(int x) { m = x; }
}; 

int main() {
    student s1(10);
    student s3 = 20;
    student s2;
    return 0;
}