// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int i=1,n;
    cin>>n;
    while(i<=n){
        int j=1;
        
         while(j<=i){
            char ch= 'A'-i+j+3;
            cout<<ch;
            //ch=ch+1;
            j=j+1;
        }
        cout<<endl;
    i=i+1;
    }

    return 0;
}
