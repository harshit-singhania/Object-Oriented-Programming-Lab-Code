// dISPLAY SQQUARE AND CUBE 0F YOUR ROLL NUMBER 
// USING INLINE FUNCTION 


#include <iostream> 
#include <string>
#include <fstream> 
using namespace std; 

class One {
    public: 
    int roll; 
    One() {} 
    One(int r) {
        roll = r; 
    } 
    void square_and_cube(); 
} ;

inline void One::square_and_cube() {
    int sq = roll * roll;
    int cu = roll * roll * roll; 
    cout << "Square is : " << sq << endl;
    cout << "Cube is : " << cu << endl;
}

int main() {
    One o(2105890);
    o.square_and_cube();
    return 0;
}