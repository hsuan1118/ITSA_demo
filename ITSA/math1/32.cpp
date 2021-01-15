#include<iostream>

using namespace std;

int main(){
    int a;
    cin>>a;
    int n1, n2, n3;
    n1 = a/100;
    n2 = a/10 -n1*10;
    n3 = a - (n1*100) - (n2*10);

    if( (n1*n1*n1) + (n2*n2*n2) + (n3*n3*n3) == a){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }

    return 0;
}
