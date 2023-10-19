#include <iostream>

using namespace std;

int main()
{
    int n,m,p;
    cin>>n;
    for (m=1;m<=9;m++)
    {
        p=n*m;
        cout<<m<<"*"<<n<<"="<<p<<endl;
    }

    return 0;
}
