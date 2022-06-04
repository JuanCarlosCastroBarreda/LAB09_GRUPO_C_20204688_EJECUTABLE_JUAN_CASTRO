#include <iostream>
#include <string>

using namespace std;

template<class T>
T mayor(T num[]){
    T valor=num[0];
    for(int i=0;i<5;i++){
        if(num[i]>valor){
            valor=num[i];
        }
    }
    return valor;
}
template<class X>
X menor(X num[]){
    X valor=num[0];
    for(int i=0;i<5;i++){
        if(num[i]<valor){
            valor=num[i];
        }
    }
    return valor;
}

int main(){
    int ArrayEntero [5] = {10,7,2, 8, 6};
    float ArrayFloat [5] = {12.1, 8.7, 5.6, 8.4, 1.2};

    cout<<"El mayor valor del ArrayEntero es: "<<mayor(ArrayEntero)<<" y el menor valor es: "<<menor(ArrayEntero)<<endl;
    cout<<"El mayor valor del ArrayFloat es: "<<mayor(ArrayFloat)<<" y el menor valor es: "<<menor(ArrayFloat)<<endl;

    system ("pause");
    return 0;
}