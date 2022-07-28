#include <iostream>
using namespace std;
int main() {
    string S;
    cout<<"Enter String"<<endl;
    getline(cin,S);
    int count=0;
    for(int i=0;i< S[i]!='\0';i++){
        count++;
    }
    cout<< count <<endl;

    return 0;
}
