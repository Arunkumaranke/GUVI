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
        if(a[i] == ' ')
            count++;
        
    }
    printf("%d", count);
    return 0;
}
    
