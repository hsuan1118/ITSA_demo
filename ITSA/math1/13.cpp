#include<iostream>

using namespace std;

int main(){
    pair<int,int> in;
    pair<int,int> out;
    cin>>in.first>>in.second>>out.first>>out.second;

    int time = (out.first*60+out.second)-(in.first*60+in.second);
    time = time/30;

    if(time<=4){
        cout<<time*30<<endl;
    }
    else if(time>8){
        cout<<280+((time-8)*60)<<endl;
    }
    else{
        cout<<120+((time-4)*40)<<endl;
    }

    return 0;
}
