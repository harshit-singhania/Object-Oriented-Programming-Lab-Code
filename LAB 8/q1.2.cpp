#include<iostream>
using namespace std ;
class Distance {
	int inches ;
	int feet ;
	public :
		Distance (int f=0 ,int i=0){
			feet = f ;
			inches = i;
		}
		Distance operator+(int x){
			Distance y ;
			y.feet=feet;
			y.inches= inches+x;
			if(y.inches>=12){
				y.feet=y.feet+1;
				y.inches=y.inches-12;
			}
		return y;
		}
		void show(){
			printf("%d feet, %d inches \n",feet,inches);
		}
};
int main(){
	Distance a(5,7),c;
	c=a+7;
	a.show();
	c.show();
	return 0;
}
