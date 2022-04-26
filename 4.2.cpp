#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int x;
    char m[10];
        
        cout << "Введите строку" << "\n";
        cin >> m;
        cout<<"Результат: " << "\n";
        
    x = strlen(m);
    
    {  
      int *c, b;
      b=0;
      while(10)
        {
            c=(int *) &m[b];
            (*c)++;
            cout << m[b];
            
            if(x==b) break;
            b++;
        }
    }
return 0;
}
