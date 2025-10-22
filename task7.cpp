#include <iostream>
using namespace std;
void tF(double tCelsium, double & tFarengeit);
void tK(double tCelsium,double & tKelvium);
void tFandK(double tCelsium,double & tFarengeit,double & tKelvium);
int main(){
    double tCelsium1,tCelsium2,tFarengeit1,tKelvium1,tFarengeit2,tKelvium2;
    cout << "Enter tCelsium1: "; cin >>tCelsium1;
    cout << "Enter tCelsium2: "; cin >>tCelsium2;
    tF(tCelsium1,tFarengeit1);
    tK(tCelsium1,tKelvium1);
    tFandK(tCelsium2,tFarengeit2,tKelvium2);
    cout << "tFarengeit1 = " << tFarengeit1 << endl;
    cout << "tKelvium1 = " << tKelvium1 << endl;
    cout << "tFarengeit2, tKelvium2 = " << tFarengeit2 << ", " << tKelvium2 << endl;
    return 0;
}
void tF(double tCelsium, double & tFarengeit){
    tFarengeit = 9.0/5.0*tCelsium+32.0;
}
void tK(double tCelsium,double & tKelvium){
    tKelvium = tCelsium+273.0;
}
void tFandK(double tCelsium,double &tFarengeit,double & tKelvium){
    tFarengeit = 9.0/5.0*tCelsium+32.0;
    tKelvium = tCelsium+273.0;
}
