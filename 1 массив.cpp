#include <iostream>

using namespace std;

int main()
{
    int a[10];
    int i=0,d;
    for (i; i<10; i++){
        cout << "введите число \n";
        cin >> d;
        if (d<0){
            break;
        }
        a[i]=d;
    }
    float c=0;
    for (int h=0; h<i; h++){
        c=(c+h);
    }
    cout << "результат " << c/i;
}
