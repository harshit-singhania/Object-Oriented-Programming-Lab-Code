#include<iostream>
using namespace std;
void show(int &x){
	for(int i=0;i<5;i++){
		cout<<x[i]<<" ";
	}
}
int main(){
	int  x[5]= {1,2,3,4,5};
	show(x);
}
