#include <iostream>
#include <string>

using namespace std;

int main()
{ string wordA,wordB;
 int lenghtA,lenghtB;
    cout << "enter string 1" << endl;
    cin>>wordA;
    cout << "enter string 2" << endl;
    cin>>wordB;
    lenghtA=wordA.length();
    lenghtB=wordB.length();
    char array[lenghtA];
    for(int i=0;i<lenghtB;i++){
      array[i]=wordB[lenghtB-i-1];

    }


    if(wordA==wordB){
    for(int j=0;j<lenghtB;j++){
     wordB[j]=array[j];

    }
    cout << "string 1 is now "<<wordA<<endl;
    cout << "string 2 is now "<<wordB<<endl;


    }
    return 0;
}
