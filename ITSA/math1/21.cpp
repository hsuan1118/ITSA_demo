#include<iostream>

using namespace std;

int main(){
    long long int a;
    cin>>a;

    for(int i=a-1;i>0;i--){
        a *= i;
    }
    cout<<a<<endl;

    return 0;
}
