#include <iostream>

using namespace std;

int main()
{int arraysize = 6;
    int array[arraysize];

    cout<<"Enter 6 numbers to be sorted: ";
    for (int i = 0; i < arraysize; i++) {
        cin >> array[i];
    } for (int i=0;i<arraysize-1; i++) {
        for (int j=0;j<arraysize-i-1; j++) {
            if (array[j] > array[j+1]) {
                int temp=array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
        }
    }
    }
    cout<<"your sorted array is "<<endl;

     for (int i = 0; i < arraysize; i++) {
        cout<<array[i]<<endl;

    }
return 0;
}
