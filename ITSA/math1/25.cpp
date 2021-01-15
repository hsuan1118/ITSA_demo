#include<iostream>

using namespace std;

int main(){
    int a;
    long long int sum = 0;

    cin>>a;

    for(int i=3;i<=a;i+=3){
        sum += i;
    }

    cout<<sum<<endl;

    return 0;
}
