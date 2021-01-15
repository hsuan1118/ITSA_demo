#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    double a;
    cin >> a;
    //round只四捨五入到個位數
    cout << fixed << setprecision(1) << round(a*a*10)/10.0 << endl;

    return 0;
}
