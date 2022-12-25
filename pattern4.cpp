/*output
1
23
345
4567
*/
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
        count=i+j-1;
        while(j<=i){
            
            cout<<count;
            count=count+1;
            j=j+1;
        }
    
    cout<<endl;
    i=i+1;
    }

}