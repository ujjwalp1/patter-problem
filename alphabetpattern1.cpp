#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cin>>n;
    i=1;
    int count;
    while(i<=n){
        int j=1;
        while(j<=n){
            char ch='A'+i-1;
            cout<<ch;
            j=j+1;
        }
    
    cout<<endl;
    i=i+1;
    }

}
/*
output
AAA
BBB
CCC
*/
