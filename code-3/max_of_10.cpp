#include <iostream>
#include <climits>

using namespace std;


int main()
{
    int a,max = INT_MIN;
   int b=10;
    while(b-- !=0)
    {
         cin>>a;
         if(a>max) max=a;
    }

    cout<<max;
}
    
