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
        if(isalpha(a[i])==false && isdigit(a[i]) ==false )
            count++;
        
    }
    cout<<count;
    return 0;
}
    
