<<<<<<< HEAD
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
=======
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
>>>>>>> 53480c85ab09a89454d9945b4a913ca684ce6c0c
}