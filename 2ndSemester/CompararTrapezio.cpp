#include <iostream>
using namespace std;

struct Trapezio {
    float baseMaior;
    float baseMenor;
    float altura;
};

void TrapezioMaior(Trapezio t1, Trapezio t2) {
    float area_t1 = ((t1.baseMaior + t1.baseMenor) * t1.altura) / 2;
    float area_t2 = ((t2.baseMaior + t2.baseMenor) * t2.altura) / 2;

    cout << "Area trapezio 1: " << area_t1 << endl;
    cout << "Area trapezio 2: " << area_t2 << endl;
    
    if      (area_t1 > area_t2) cout << "\nO trapezio 1 e maior que o trapezio 2." << endl;
    else if (area_t2 > area_t1) cout << "\nO trapezio 2 e maior que o trapezio 1." << endl;
    else                        cout << "\nAs areas dos trapezios sao iguais." << endl;
}

main() {

    struct Trapezio t1 = {20, 10, 5};
    struct Trapezio t2 = {24, 9, 15};

    TrapezioMaior(t1, t2);
}