#include <iostream>
using namespace std;

// Función auxiliar recursiva:
// verifica si array A está ordenado ascendentemente
bool estaOrdenadoRec(const int A[], int i, int n) {
    // Caso base 1(CASO ESPECIAL): un solo elemento (o ninguno) entonces asumimos que el array esta completamente ordenado
    if (i >= n - 1) return true;

    // Caso recursivo: si A[i] > A[i+1] no esta ordenado entonces retorna falso
    if (A[i] > A[i+1]) return false;

    // Si el par actual que se toma cumple, verifica el resto
    return estaOrdenadoRec(A, i + 1, n);
}

// Función envoltorio (interfaz limpia)
bool estaOrdenado(const int A[], int n) {
    return estaOrdenadoRec(A, 0, n);
}

int main() {
    int a[] = {1, 2, 2, 5, 8};
    int n1 = sizeof(a) / sizeof(a[0]);
    cout << (estaOrdenado(a, n1) ? "verdadero" : "falso") << endl;

    int b[] = {1, 4, 2, 8};
    int n2 = sizeof(b) / sizeof(b[0]);
    cout << (estaOrdenado(b, n2) ? "verdadero" : "falso") << endl;

    return 0;
}
