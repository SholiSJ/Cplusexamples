#include<iostream>

using namespace std;

signed main(){

int a;
cin>>a;
int b[a];

for (size_t i = 0; i < a; i++)
{
   cin>>b[i];
}

for (size_t i = 0; i < a; i++)
{
    cout<<endl<<b[i];
}

return 0;
}