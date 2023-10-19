#include <iostream>

using namespace std;

int main()
{
    int a,b,i;
    cin>>a>>b;
    for (i=a+1;i<=b;i++)
    {
        a*=i;
        cout<<a<<endl;
    }
        return 0;
}
