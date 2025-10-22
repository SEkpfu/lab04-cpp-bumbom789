#include <iostream>
using namespace std;
void square(int n,int m){
 for(int i{};i<n;i++){
    for(int k{};k<m;k++){
        cout << " ";
    }
    for(int j{};j<n;j++){
        cout << "*";
    }
    cout << '\n';
 }
}
void printChessBoard(int N, int M) {
    for (int i = 0; i < N; i++) {        // строки доски
        for (int row = 0; row < M; row++) { // строки внутри клетки
            for (int j = 0; j < N; j++) {    // столбцы доски
                char symbol = ((i + j) % 2 == 0) ? '*' : 'O';
                for (int col = 0; col < M; col++) { // столбцы внутри клетки
                    cout << symbol;
                }
            }
            cout << endl;
        }
    }
}
int main(){
    int n,m;
    cout << "Enter side: "; cin >> n;
    cout << "Enter indent: "; cin >> m;
    square(n,m);
    int N, M;
    
    cout << "Enter the board size (N): "; cin >> N;
    cout << "Enter the cell size (M): "; cin >> M;
    
    cout << "Chess board " << N << "x" << N << " with cells " << M << "x" << M << ":\n";
    printChessBoard(N, M);
    return 0;
}
