#pragma once
#include<vector>

using namespace std;

class Matriz {
public:

	vector<vector<int>>matriz;
	
	//Constructor
	Matriz(vector<vector<int>> m);

	//Sobrecargas el operador
	Matriz operator *(const Matriz& m);

	void print();
};