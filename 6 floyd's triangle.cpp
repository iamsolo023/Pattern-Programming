#include<iostream>
using namespace std;
int main()
{
    int n, i, j;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;
    int Count = 1;
    cout<<endl;
    cout<<"Your Floyd's triangle is printed below."<<endl<<endl;

    for(i=1; i<=n; i++){
        for(j=1; j<=i; j++){
            cout<<Count<<" ";
            Count++;
        }
        cout<<endl;
    }
    return 0;
}
