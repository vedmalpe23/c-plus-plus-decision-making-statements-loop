#include<iostream>
using namespace std;
int main()
{
    int i,j;
    int k=65;
    int n=4;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<char(k);
            k++;
        }
        cout<<endl;
    }
}
/*output:
A
BC
DEF
GHIJ
*/
