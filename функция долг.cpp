#include <iostream>

using namespace std;

float type(int n){
    if (n==0){
        cout << "ноль";
    } else if (n%2==0){
        cout << "четное";
    }else {
        cout << "не четное";
    }
return 0;
}

int main(){
    int n;
    cout << "введите число: ";
    cin >> n;
    type(n);
    return 0;
}
