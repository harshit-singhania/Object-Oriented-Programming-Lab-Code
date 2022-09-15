#include <iostream>
#include <iomanip>
using namespace std;

class stdu {
        
        public:
         string name;
         int  roll;
         int en,mat,phy,lab,htc;
         int tm;

         void getd ()
         {
         cout<<"enter name of the student:";
         cin>>name;
         cout<<"\nenter roll no:";
         cin>>roll;
         cout<<"\nenter marks in en,mat,phy,lab,htc respectively:";
         cin>>en;cin>>mat;cin>>phy;cin>>lab;cin>>htc;
         }
         void disd ()
         {
          tm=en+phy+mat+lab+htc;
          cout<<"\n name:"<<name<<"\n roll no:"<<roll<<"\n total marks:"<<tm;
         }
         };
    
    int main()
    {
        stdu stdu1;
        stdu1.getd();
        stdu1.disd();

        

     return 0;
}