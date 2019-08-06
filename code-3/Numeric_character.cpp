#include <iostream>
#include <string>

using namespace std;

int main()
{
    string a;
    int count=0;
    getline(cin,a);
    for(int i=0; a[i] != 0;i++)
    {
        if(a[i] >= '0' && a[i] <= '9')
            count++;
        
    }
    cout<<count;
    return 0;
}
    
