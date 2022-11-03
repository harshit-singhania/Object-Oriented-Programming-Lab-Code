#include<iostream>
using namespace std ;
class Distance {
	int feet ;
	int inches ;
	public:
	Distance (int f=0, int i=0){
		feet = f ;
		inches = i ;
	}
	void show (){
	printf("%d feet, %d inches \n",feet,inches);	
	}
	//using class meber function
//	Distance operator+(Distance x){
//		Distance y ;
//		y.feet= x.feet+feet;
//		y.inches= x.inches+inches;
//		if(y.inches>=12){
//			y.feet = y.feet +1 ;
//			y.inches = y.inches -12;
//		}
//		return y ;
//	}
friend Distance operator+(Distance,Distance);
};
Distance operator+(Distance x, Distance y){
Distance z;
z.feet = x.feet+y.feet;
z.inches = x.inches+y.inches;
if(z.inches>=12){
	z.feet = z.feet+1;
	z.inches=z.inches-12;
}	
return z ;
}
                                    

int main(){
	Distance  a(2,8),b(4,5),c;
	a.show();
	b.show();
    c=a+b;
    c.show();
}
