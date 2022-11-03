// WAP to add two objects of distance class. Overload the operator ‘>’ to compare two
// objects and return the object with larger time value and display it. Overload the ‘=="
// operator to compare and display whether two given objects contain same distance
// value.

class Distance {
    public: 
        int feet, inch; 
        Distance(int feet, int inch) {
            this->feet = feet;
            this->inch = inch; 
        } 
        
};