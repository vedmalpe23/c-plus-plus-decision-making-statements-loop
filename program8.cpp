#include<iostream>
using namespace std;
int main()
{
    int i,j;
    int n=4;
    int k=1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
           cout<<k<<" ";
           k++;
        }
        cout<<endl;
    }
}
/*
output:
1 
2 3 
4 5 6 
7 8 9 10 
  */
