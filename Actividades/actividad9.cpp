#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> s;

    s.push(6);
    s.push(2);
    s.push(8);
    s.push(5);
    s.push(1);

    cout << "Tamaño de la pila: " << s.size() << endl;

    cout << "Top de la pila: " << s.top() << endl;

    s.pop();
    
    cout <<"SEGUNDO ELEMENTO DE LA PILA: "<<s.top()<<endl;
    
    s.pop();
    
    cout << "Tamaño de la pila: " << s.size() << endl;
    
    return 0;
}