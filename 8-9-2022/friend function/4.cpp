// Create a class which stores name, roll number and total marks for a student. Input data for
// n students. Find the average marks scored by n students, store it as a data member of
// the class and display it using a function which may be called without object.

#include <iostream>


using namespace std;
class Student{
    private:
        string name;
        int rollno;
         
    
    public:
        int total[11];
        void getDetails(){
            for(int i=0;i<11;i++){
                cout<<"\nEnter details for student "<<i+1<<": ";
                cout<<"\nName: ";
                cin>>name;
                cout<<"\nRoll no: ";
                cin>>rollno;
                cout<<"\nTotal: ";
                cin>>total[i];
            }
        }
        
};
void getAverage(Student s, int n){
    s.getDetails();
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+s.total[i];
    }
    double average=double(sum)/(double)n;
    cout<<"\nAverage is "<<average;
}
int main()
{
    Student s1;
    getAverage(s1,11);


    return 0;
}
