#include<iostream>
#include"Matriz.h"
#include<vector>

using namespace std;

Matriz::Matriz(vector<vector<int>> m): matriz(m){}

Matriz Matriz::operator * (const Matriz& m) {
	int filas = matriz.size();
	int columnas = m.matriz[0].size();
	int dimensionMatriz = matriz[0].size();

	vector<vector<int>> resultado(filas, vector<int>(columnas, 0));

	for (int i = 0; i < filas; i++) {
		for (int j = 0; j < columnas; j++) {
			for (int k = 0; k < dimensionMatriz; k++) {
				resultado[i][j] += matriz[i][k] * m.matriz[k][j];
			}
		}
	}
	return Matriz(resultado);
}

void Matriz::print() {
	for (int i = 0; i < matriz.size(); i++) {
		for (int j = 0; j < matriz[i].size(); j++) {
			cout << matriz[i][j] << " ";
		}
		cout << endl;
	}
}