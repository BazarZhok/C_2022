#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream t("square.txt");
    int n;
    cout << "n: ";
    cin >> n;
        {
        for (int i = 0; i < n; i++){
        if (i==0){
            } else {
              t << "\n";
            }
                for (int k = 0; k<n; k++)
                t << ("+");
            } 
          }
    t.close();
return 0;
}
