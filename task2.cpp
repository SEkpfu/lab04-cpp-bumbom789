#include <iostream>
#include <cmath>
using namespace std;
double lenght(double x1,double x2,double y1,double y2);
double areaTriangle(double x1,double x2, double x3, double y1, double y2, double y3);
double areaQuadrilateral(double x1,double x2, double x3,double x4, double y1, double y2, double y3,double y4);
int main()
{
    double x1,x2,x3,x4,y1,y2,y3,y4;
    cout << "Enter x1, y1: " ; cin >> x1 >> y1;
    cout << "Enter x2, y2: ";cin >> x2 >> y2;
    cout << "Enter x3, y3: ";cin >> x3 >> y3;
    cout << "Enter x4, y4: ";cin >> x4 >> y4;
    cout << "Distance between point1 and point2 = " << lenght(x1,x2,y1,y2) << endl;
    cout << "Distance between point1 and origin = " << lenght(x1,0,y1,0) << endl;
    cout << "Distance between point2 and origin = " << lenght(x2,0,y2,0) << endl;
    cout << "Area of a triangle = " << areaTriangle(x1,x2,x3,y1,y2,y3) << endl; // Площадь треугольника
    cout << "Area of a quadrilateral = " << areaQuadrilateral(x1,x2,x3,x4,y1,y2,y3,y4) << endl; // Площадь четырехугольника
    return 0;
}
double lenght(double x1,double x2,double y1,double y2){
    return sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
}
double areaTriangle(double x1,double x2, double x3, double y1, double y2, double y3){
    double a,b,c,p;
    a = lenght(x1,x2,y1,y2);
    b = lenght(x2,x3,y2,y3);
    c = lenght(x1,x3,y1,y3);
    p = (a+b+c)/2.0;
    return sqrt(p*(p-a)*(p-b)*(p-c));
}
double areaQuadrilateral(double x1,double x2, double x3,double x4, double y1, double y2, double y3,double y4){
    double s1,s2;
    s1 = areaTriangle(x1,x2,x3,y1,y2,y3);
    s2 = areaTriangle(x1,x3,x4,y1,y3,y4);
    return s1+s2;
}
