
#include <iostream>
#include <math.h>
using namespace std;
double f(double x){
    if (x<0){
        return 7.0/3.0;
    } else if(x<2.0*M_PI){
        return x*x-3.0;
    } else{
    return (1.0+x*x*x)/(2.0*x);}
}
int main(){
    double a,b;
    cout << "Enter a, b: "; cin >> a >> b;
    cout << "Expr = " << 12.5+f(2)-f(4)*f(10)+f(a)-f(b)+f(a*b) << endl;
    const int n = 7; // колво элементов в массиве
    double arrX[n],arrY[n],maxElement{-1};
    int k{};
    for(int i{};i<n;i++){
        double x;
        cout << "Enter x: ";cin >>x;
        arrX[i]=x;
        arrY[i]=f(x);
        if (arrY[i]<0){
            k++;
        }
        if (arrY[i]>maxElement){
            maxElement = arrY[i];
        }

    }
    cout << "Number of elements < 0 = " << k << endl;
    cout << "Max element = " << maxElement << endl;
    return 0;

}
