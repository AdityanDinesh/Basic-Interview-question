#include <iostream>
#include<string.h>
using namespace std;

int main() {
    string S;
    cout<<"Enter String"<<endl;
    getline(cin,S);
    int p = S.length();
    for(int i=p-1;i>=0;i--){
        cout << S[i];
    } 
    return 0;
}
