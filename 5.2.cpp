#include <iostream>

using namespace std;

void sort(int m[])
{
    for (int a=0; a<=9; a++)
    {
        for (int b=a+1; b<=10; b++)
        {
            if (m[a]<m[b])
            {
                int i=m[b];
                m[b]=m[a];
                m[a]=i;
            }
        }
    }
}
    int main()
        {
            int m[10];
            cout<<"Введите массив: " << "\n";
            for (int a=0; a<=9; a++)
        {
            cout<<" ";
            cin>>m[a];
        }
        
sort (m);
for (int b=0; b<=9; b++)
  {
    cout<<m[b]<<' ';
  }
    cout << "\n";
  
return 0;
}
