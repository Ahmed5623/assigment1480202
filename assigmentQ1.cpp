#include <iostream>

using namespace std;

int main()
{int sum = 0;

    for (int i=2;i<=50; i++) {
     for (int j=2;j<=i;j++) {
            if (i%j==0&&j!=i) {
                break;

            }
            if (j==i) {
            sum=sum+i;
        }
        }

    }
     cout<<"your sum of prime numbers between the range is "<<sum<<endl;
    return 0;
}
