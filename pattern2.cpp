//output
/*
1
12
123
1234
*/
#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cin>>n;
    i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            
            cout<<j;
            j=j+1;
        }
    
    cout<<endl;
    i=i+1;
    }

}