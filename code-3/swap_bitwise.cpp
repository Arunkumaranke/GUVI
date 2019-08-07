#include <iostream>


using namespace std;

int main()
{
    int ab,bc;
    cin>>ab>>bc;
    ab= ab ^ bc;
    bc= ab ^ bc;
    ab=ab ^ bc;
    cout<<ab<<" "<<bc;
    return 0;
}
    
