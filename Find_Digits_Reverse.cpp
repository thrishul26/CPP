#include<bits/stdc++.h>
using namespace std;
int main()
{
    //find no. of digits of the number
    int n,count=0;
    cin>>n;
    int a=n;
    while(n>0)
    {
        n=n/10;
        count++;
    }
    cout<<count<<endl;
    //find reverse of the number
    int remainder;
    int reverse=0;
    while(a!=0)
    {
        remainder=a%10;
        reverse=reverse*10+remainder;
        a=a/10;
    }
    cout<<reverse<<endl;
    return 0;
}