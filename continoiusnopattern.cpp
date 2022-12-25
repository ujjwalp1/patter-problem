#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cin>>n;
    i=1;
    int count;
    count=1;
    while(i<=n){
        int j=1;
        
        while(j<=n){
            cout<<count;
            count=count+1;
            j=j+1;
            //count=count+1;
        }
    //count=count+1;
    cout<<endl;
    i=i+1;
    }

}