//library
#include<iostream>
using namespace std;

//deklarasi global
float p,l;

//implementasi prosedur dan fungsi
void input(){
    cout << "masukan panjang : ";
    cin >> p;
    cout << "masukan lebar : ";
    cin >> l;
}

float LuasPersegi(){
    return p*l;
}

void output(){
    cout << "hasilnya =" << LuasPersegi();
}

int main () {
    input();
    output();
}