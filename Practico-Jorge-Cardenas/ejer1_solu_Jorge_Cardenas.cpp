#include <iostream>
using namespace std;
int main() {
    
    int m = 20;
    int h = 5;
    
    cout << "Tiene 20$" << endl;
    cout << "El helado cuesta 5$" << endl;
    
    for (int h = 5 ; m >= 5 ; m = m - 5 ){
        
        cout << "Se compro un helado" << endl;
        cout << "Tiene " << m - h << "$"  << endl;
    }
    
    if (m == 0){
        cout << "Ya no tiene dinero" << endl;
    }
    
    
    return 0;
}