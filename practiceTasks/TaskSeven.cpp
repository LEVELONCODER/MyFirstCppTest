#include <iostream>
#include <cmath>
using namespace std;

int myfunc() {
    int x, y;
    cout<<"Введите N: "; cin>>x;
    cout<<endl;
    cout<<"Введите степень K: "<<endl; cin>>y;
    int result = pow(x, y);
    cout<<"Сумма: "<<result<<endl;
}

int main() {
    myfunc();
    return 0;
}
