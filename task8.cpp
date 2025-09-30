#include <iostream>
#include <cmath>
using namespace std;
int calculatex(double a,double b,double c,double* x1, double* x2);
int main()
{
    double a,b,c,x1,x2;
    cout << "Enter a, b, c: ";cin >> a >> b >> c;
    int numberOfRoots = calculatex(a,b,c,&x1,&x2);
    switch (numberOfRoots)
    {
    case 0:
        cout << "No real roots" << endl;
        break;
    case 1:
        cout << "One root = " << x1 << endl;
        break;
    case 2:
        cout << "Two roots x1 = " << x1 << ", x2 = " << x2 << endl;
    }
}


int calculatex(double a,double b,double c,double* x1, double* x2){
    double discriminant = b*b-4*a*c;
    if (discriminant<0){
        return 0;
    }
    else if (discriminant==0){
        *x1 = -b/(2.0*a);
        return 1;
    }
    else {
        *x1 = (-b+sqrt(discriminant))/(2.0*a);
        *x2 = (-b-sqrt(discriminant))/(2.0*a);
        return 2;
    }
}
