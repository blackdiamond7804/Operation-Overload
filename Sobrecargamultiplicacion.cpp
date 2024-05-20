#include <iostream>
#include<vector>
#include"Matriz.h"


int main() {
	vector<vector<int>> m1 = { {1,2,3}, {2,9,5} };
	vector<vector<int>> m2 = { {1,2}, {9,5}, {20, 30} };

	Matriz matriz1(m1);
	Matriz matriz2(m2);

	Matriz resultado = matriz1 * matriz2;
	resultado.print();

	return 0;
}