#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;
double area(int a,int h);
double area(int a,int b, int angle);
double area(double a,double b,double c);

int main()
{
    int a,h;
    cout << "Enter a, h: ";cin >> a >> h;
    cout << "S = " << area(a,h) << endl;
    int a1,b1,degrees;
    cout << "\nEnter a, b, degrees: "; cin >> a1 >> b1 >> degrees;
    cout << "S = " << area(a1,b1,degrees) << endl;
    double a2,b2,c2;
    cout << "\nEnter a, b, c: "; cin >> a2 >> b2 >> c2;
    cout << "S = " << area(a2,b2,c2) <<endl;
    return 0;

}
double area(int a,int h){
    return 0.5*a*h;
}
double area(int a,int b,int Degrees){
    double Radians = Degrees*M_PI/180.0;
    return 0.5*a*b*sin(Radians);
}
double area(double a,double b,double c){
    double p = 0.5*(a+b+c);
    return sqrt(p*(p-a)*(p-b)*(p-c));
}
