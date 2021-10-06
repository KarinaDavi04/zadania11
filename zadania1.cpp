
#include <iostream>
using namespace std;

class Triangle{
	public:
		int bok_a;
		int bok_b;
		int bok_c;
		int h;
		int p;
		double P;
		int pole;
		double obwod;
		
		void obliczPole(){
		cout<<"Pole stanowi: "<< pole;
		}
		void obliczObwod(){
		cout<<"Obwod stanowi: "<< obwod;
		}
		
};




int main() {
	Triangle triangle;
	triangle.bok_a = 6;
	triangle.bok_b = 2;
	triangle.bok_c = 10;
	triangle.h = 4;
	triangle.pole = 0.5*triangle.bok_a*triangle.h;
	triangle.obliczPole();
	triangle.p=(triangle.bok_a*triangle.bok_b*triangle.bok_c)/2;
	triangle.P =triangle.p*(triangle.p-triangle.bok_a)*(triangle.p-triangle.bok_b)*(triangle.p-triangle.bok_c);
	triangle.obwod =sqrt(P);
	triangle.obliczObwod();
}
