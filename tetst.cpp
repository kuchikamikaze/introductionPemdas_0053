#include<iostream>
using namespace std;

float nilai;

void input(){
    cout << "masukan nilai : ";
    cin >> nilai;

}

void lulus() {
    if (nilai > 75){
        cout << "Lulus!!";
    }
    else {
        cout << "Gagal..";
    }
}

void output(){
    cout << "hasilnya =";
    lulus();
}

int main (){
    input();
    output();
}