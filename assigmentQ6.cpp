#include <iostream>

using namespace std;

int main()
{int divident=0;
int divisor=1;
int ans=0;

   while(divident<=divisor){
    cout << "enter divident followed by divisor" << endl;
    cin>>divident;
    cin>>divisor;


   }
   while(divident>=divisor){
    divident=divident-divisor;
    ans++;



   }
   int remainder=divident;
   cout<<"your answer is "<<ans<<endl;
   cout << "your remainder is "<< remainder<<endl;

    return 0;
}
