#include <iostream>

using namespace std;

int main()
{int array[5]={1,2,3,4,5};
int num;
    cout << "how many elements do you wanna add" << endl;
    cin>>num;
    int extendedarray[num+5];
    for(int i=0;i<5;i++){
    extendedarray[i]=array[i];
 }
    for(int i=5;i<num+5;i++){
      cout << "add element to position number "<<i<< endl;
     cin>>extendedarray[i];
}
    for(int i=0;i<num+5;i++){
    cout<<extendedarray[i];

    }
    return 0;
}
