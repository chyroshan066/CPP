#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    char str[] = "GNU is not UNIX";
    for(int i=1; i<=strlen(str); i++){
        cout.write(str, i);
        cout<< endl;
    }
    return 0;
}