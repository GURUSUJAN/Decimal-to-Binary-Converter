#include"iostream"
#include <cmath>
using namespace std;
int main()
{
    int i,x;
    cin>>x;
    int ar[x],count=0;
    while(x>0)
    {
     ar[count]=x%2;
     x=x/2;
     count++;
    }
    for(i=0;i<count;i++)
    {
        cout<<ar[i]<<"\t";
    }
}
