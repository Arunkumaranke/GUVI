#include <iostream>
#include <climits>

using namespace std;
int main(){
    int num,min = INT_MAX, max = INT_MIN;
    cin>>num; 
while(num--!=0)
{
    int num1;
    cin>>num1;
    if(num1>max) max=num1;
    if(num1<min) min=num1;
}
    cout<<min<<" "<<max;
}
