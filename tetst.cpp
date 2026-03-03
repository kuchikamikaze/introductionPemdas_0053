<<<<<<< HEAD
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
=======
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
>>>>>>> 53480c85ab09a89454d9945b4a913ca684ce6c0c
}