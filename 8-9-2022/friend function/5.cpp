// Create a class which stores name, author and price of a book. Store information for n
// number of books. Display information of all the books in a given price range using
// friend function.

#include <iostream>
using namespace std; 

class Book{
    private:
        string name;
        string author;
        int price;
    public:
        void getDetails(){
            cout<<"\nEnter name: ";
            cin>>name;
            cout<<"\nEnter author: ";
            cin>>author;
            cout<<"\nEnter price: ";
            cin>>price;
        }
        friend void display(Book b[], int n, int min, int max);
};

void display(Book b[], int n, int min, int max){
    for(int i=0;i<n;i++){
        if(b[i].price>=min && b[i].price<=max){
            cout<<"\nName: "<<b[i].name;
            cout<<"\nAuthor: "<<b[i].author;
            cout<<"\nPrice: "<<b[i].price;
        }
    }
}

int main()
{
    int n;
    cout<<"\nEnter number of books: ";
    cin>>n;
    Book b[n];
    for(int i=0;i<n;i++){
        b[i].getDetails();
    }
    int min,max;
    cout<<"\nEnter minimum price: ";
    cin>>min;
    cout<<"\nEnter maximum price: ";
    cin>>max;
    display(b,n,min,max);
    return 0;
}