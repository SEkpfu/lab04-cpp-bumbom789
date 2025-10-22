#include <iostream>
using namespace std;
double average(double a,double b);
double average(double a,double b,double c);
double average(double a,double b,double c,double d);
int main(){
    double a,b,c,d;
    cout << "Enter a, b, c, d: "; cin >> a >> b >> c >> d;
    cout << "Arithmetic mean a, b = " << average(a,b) << endl;
    cout << "Arithmetic mean a, b, c = " << average(a,b,c) << endl;
    cout << "Arithmetic mean a, b, c, d = " << average(a,b,c,d) << endl;
}
double average(double a,double b){
    return (a+b)/2.0;
}
double average(double a,double b,double c){
    return (a+b+c)/3.0;
}
double average(double a,double b,double c,double d){
    return (a+b+c+d)/4.0;
}
