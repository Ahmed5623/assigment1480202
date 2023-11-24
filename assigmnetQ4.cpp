#include <iostream>

using namespace std;

int main()
{int num,prime;
int i=2;
bool flag=true;
    cout << "enter a positive integer" << endl;
    cin>>num;
    while(i<=num){
        flag=true;
       for(int j=2;j<=i;j++){
        if(i%j==0&&i!=j){
            flag=false;
            break;

        }



       }

      if(flag==true){
        prime=i;

      }
      i++;

       }

     cout<<prime<<endl;



    return 0;
}
