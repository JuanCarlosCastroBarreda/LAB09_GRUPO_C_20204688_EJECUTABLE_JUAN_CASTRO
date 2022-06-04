#include <iostream>
#include <string>

using namespace std;

template <class P>
P valor(P x1, P x2, P x3){
    P menor;
    P maximo;
    
    if(x1==x2 and x1==x3){
        cout<<"El minimo y el menor son iguales"<<endl;
    }
    else if(x1>x2 and x1>x3 or x1==x3){
        if(x2==x3 or x2>x3){
            cout<<"El maximo y menor son: "<<x1<<" y "<<x3<<endl;
        }else{
            cout<<"El maximo y menor son: "<<x1<<" y "<<x2<<endl;
        }
    }
    else if(x2>x1 and x2>x3 or x2==x3){
        if(x1==x3 or x1>x3){
            cout<<"El maximo y menor son: "<<x2<<" y "<<x3<<endl;
        }else{
            cout<<"El maximo y menor son: "<<x2<<" y "<<x1<<endl;
        }
    }
    else if(x3>x1 and x3>x2 or x3==x2){
        if(x1==x2 or x1>x2){
            cout<<"El maximo y menor son: "<<x3<<" y "<<x2<<endl;
        }else{
            cout<<"El maximo y menor son: "<<x3<<" y "<<x1<<endl;
        }
    }
}
int main(){
    int a=2, b=2, c=2;
    valor(a,b,c);
    system ("pause");
    return 0;
}
