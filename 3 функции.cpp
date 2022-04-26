#include <iostream>

using namespace std ;

float cube(float a,float result)
{
    result=a*a*a;
    return result;
}

int main ()
{     
    int i=1;
    float c,result;
    for (i;i<22;(i++)){
        c=i;
        cout<<"Результат - "<<cube(c,result)<<"\n";
        i++;
    }
}
