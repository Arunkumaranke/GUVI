#include <iostream>

using namespace std;

int main()
{
int jo;
int flag=1;
cin>>jo;

while(jo)
{
    if(jo%2 !=0 && jo!=1)
    {
        flag=0;
        break;
    }
    jo /=2;
}
(flag==1) ? cout<<"yes":cout<<"no";
return 0;

}
