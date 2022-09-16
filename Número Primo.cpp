/******************************************************************************

2. Leia um número e verifique se ele é um número primo.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{   int n=0,i,r=0;
    cout<<"Leia um numero e verifique se ele e um numero primo.\n";
    cout<<"Digite um numero: ";
    cin>>n;
    
    for(i=n-1;i>1;i--)
    {
      if(n%i==0)
      {
        r++;
        i=1;
      }
    }
    
    if(r!=0)
    {
        cout<<"Numero nao e primo\n";
    }else
    {
        cout<<"Numero e primo\n";
    }
    
  
    return 0;
}

