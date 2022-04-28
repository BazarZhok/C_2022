#include <iostream>

using namespace std;

int main()
{
    int x;
        float parts[20];
        cout << "введите число x: "<<"\n";
        cin >> x;
    int numbers[20]={4,5,4,5,4,5,4,4,5,4,4,5,4,4,5,4,4,5,4,4};
        for (int i=0; i<20; i++){
                parts[i]=numbers[i]%x;
            }
            cout<<"массив:\n";
            for (int i=0; i<20; i++){
                cout << parts[i]<<" ";
            }
    return 0;
}
