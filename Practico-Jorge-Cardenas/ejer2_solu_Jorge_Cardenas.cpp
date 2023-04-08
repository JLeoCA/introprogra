#include <iostream>
#include <cmath>
using namespace std;
int main() {
    
int n , suma = 0, x;
cout << "ingrese el numero" << endl;
cin >> n;
x = n;
while( n > 0 ){
    suma = suma * 10 + (n % 10);
    n = trunc (n/10);
}
    cout << suma << endl;
    if (suma == x){
        cout << "es palindromo" << endl;
    }
        else {
            cout << "no es palindromo" << endl;
        }

 return 0;
}