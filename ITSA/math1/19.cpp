#include<iostream>
#include <iomanip>

using namespace std;

int main(){
    int a;
    cin>>a;
    double ans = 0;

    if(a <= 800){
        ans = a*0.9;
    }
    else if(a < 1500){
        ans = a*0.9*0.9;
    }
    else{
        ans = a*0.9*0.79;
    }

    cout<< fixed << setprecision(1) << ans << endl;

    return 0;
}
