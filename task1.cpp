#include <iostream>
using namespace std;
double sum(double a,double b);
double razn(double a,double b);
double umn(double a,double b);
int main()
{
    double a,b;
    cout << "Enter a: "; cin >> a;
    cout << "Enter b: "; cin >> b;
    cout << "S = " << sum(umn(5,sum(razn(a,2),b)),umn(1000,a));
    return 0;
}
double sum(double a,double b){
    return a+b;
}
double razn(double a,double b){
    return a-b;
}
double umn(double a,double b){
    return a*b;
}
