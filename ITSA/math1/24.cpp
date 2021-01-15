#include<iostream>
#include <iomanip>

using namespace std;

int main(){
    int time, money;
    double sum = 0;
    cin>>time>>money;

    if(time>=121){
        sum = (time-120)*(money*1.66);
        time = 120;
        sum += (time-60)*(money*1.33);
        time = 60;
        sum += time*money;

    }
    else if(time<=60){
        sum = time*money;
    }
    else{
        sum = (time-60)*(money*1.33);
        time = 60;
        sum += time*money;
    }

    cout<< fixed << setprecision(1) << sum << endl;

    return 0;
}
