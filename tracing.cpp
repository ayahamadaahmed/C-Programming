#include <iostream>
using namespace std;
int main() 
{
int *xp1, *xp3;
xp1 = new int[4];
xp1[0]=6; xp1[1]=7; xp1[2]=6; xp1[3]=9;
xp3 = xp1;
delete xp1;
cout<< *xp3;

return 0;
}