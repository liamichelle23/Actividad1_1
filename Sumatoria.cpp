#include <iostream>
using namespace std;

int SumIterativa(int a){
    int ans = 0;
    for(int i = 0; i <= a; i++){
        ans = ans+i;
    }
    return ans;
}

int SumRecursiva(int a){
    if(a==1){return 1;}
    else{
        return (SumRecursiva(a-1)+a);
    }
}

int SumDirecta(int a){
    int ans;
    ans = a*(a+1)/2;
    return ans;
}

int main()
{
    int a;
    cout << "Escriba el número entero que desee sumar: ";
    cin >> a;
    int sumI = SumIterativa(a);
    int sumR = SumRecursiva(a);
    int sumD = SumDirecta(a);
    cout << "Suma iterativa: " << sumI << endl;
    cout << "Suma recursiva: " << sumR << endl;
    cout << "Suma directa: " << sumD << endl;
    
}