#include <bits/stdc++.h>
using namespace std;
// Felipe Ferreira Alves - 2021020653
int main(){
    float x,y;
    cin >> x;
    cin >> y;

    if((x > 0) && (y>0)){
        cout << "Q1" << "\n";
    } else if ((x>0) && (y<0)){
        cout << "Q4" << "\n";
    } else if ((x<0) && (y>0)){
        cout << "Q2" << "\n";
    } else if ((x<0) && (y < 0)){
        cout << "Q3" << "\n";
    } else if ((y == 0.0) && (x != 0.0)){
        cout << "Eixo X" << "\n";
    } else if ((x == 0.0) && (y != 0.0)) {
        cout << "Eixo Y" << "\n";
    } else {
        cout << "Origem" << "\n";
    }

    return 0;
}