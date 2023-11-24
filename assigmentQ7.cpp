#include <iostream>
#include <string>
using namespace std;

int main()
{string word;
 int lenght;
    cout << "enter your word" << endl;
    cin>>word;
    lenght=word.length();
    char array[lenght];
    for(int i=0;i<lenght;i++){
      array[i]=word[i];
    }
    for(int i=0;i<lenght;i++){
      for(int j=0;j<i;j++){
       if(array[i]==array[j]){
        array[i]=NULL;
       }
      }
    }
for(int i=0;i<lenght;i++){
       word[i]=array[i];

    }
cout << word << endl;
return 0;
}
