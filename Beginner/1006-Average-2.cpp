#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a, b, c, M=0;
    cin>>a>>b>>c;
    a = a*2;
    b = b*3;
    c = c*5;

    M = (a+b+c)/10;

    cout<<"MEDIA = "<<fixed<<setprecision(1)<<M<<endl;

    return 0;
}
