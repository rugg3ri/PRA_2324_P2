#include <iostream>
#include <vector>
#include "DyV.h"
#include <string>
using namespace std;

int main(){
	vector<int>vecInt = {1,3,6,9,13};
	int posInt = BusquedaBinaria(9, vecInt, 0, vecInt.size() - 1);
	cout <<"Posicion del 9 en vecInt: " << posInt << endl;

	vector<float>vecFlt = {1.2f, 2.5f, 3.5f, 7.8f, 10.2f};
	int posFlt = BusquedaBinaria(1.2f, vecFlt, 0, vecFlt.size() - 1);
	cout << "Posicion del 1.2f en vecFlt: " << posFlt << endl;

	vector<string>vecStr = {"hola", "adios", "chao", "yes"};
	int posStr = BusquedaBinaria(string("yes"), vecStr, 0,vecStr.size() - 1);
	cout << "Posicion de \"yes\" en vecStr: " << posStr << endl;
	
	vector<char>vecChr = {'a', 'b', 'c','d','e'};
	int posChr = BusquedaBinaria('d', vecChr, 0, vecChr.size() - 1);
	cout << "Posicion del 'd' en vecChr: " << posChr << endl;
	
	vector<int>vecDescInt = {20, 15, 12, 10, 5};
        int posDescInt = BusquedaBinaria_INV(10, vecDescInt, 0, vecDescInt.size() - 1);
        cout <<"Posicion del 9 en vecDescInt: " << posDescInt << endl;

        vector<float>vecDescFlt = {10.3f, 8.5f, 7.8f, 4.5f, 1.3f};
        int posDescFlt = BusquedaBinaria_INV(1.3f, vecDescFlt, 0, vecDescFlt.size() - 1);
        cout << "Posicion del 1.3f en vecDescFlt: " << posDescFlt << endl;

        vector<string>vecDescStr = {"hola", "adios", "chao", "yes"};
        int posDescStr = BusquedaBinaria_INV(string("adios"), vecDescStr, 0,vecDescStr.size() - 1);
cout << "Posicion de \"adios\" en vecDescStr: " << posDescStr << endl;

        vector<char>vecDescChr = {'e', 'd', 'c', 'b', 'a'};
        int posDescChr = BusquedaBinaria_INV('b', vecDescChr, 0, vecDescChr.size() - 1);
        cout << "Posicion del 'b' en vecDescChr: " << posDescChr << endl;



	vector<int> v_int = {9, 3, 5, 1, 7, 2, 8};
	QuickSort(v_int, 0, v_int.size()-1);
	
	vector<float> v_float = {3.14, 2.71, 1.41, 5.0, 4.2};
	QuickSort(v_float, 0, v_float.size()-1);

 	vector<char> v_char = {'z', 'a', 'f', 'b', 'm', 'c'};
	QuickSort(v_char, 0, v_char.size()-1);
	cout << "Vector ordenado: ";
        for (const char& c : v_char) cout << c << " ";
        cout << endl;

	vector<string> v_str = {"perro", "gato", "elefante", "loro", "abeja"};
	QuickSort(v_str,0, v_str.size()-1);
	cout << "Vector ordenado: ";
	for (const string& s : v_str) cout << s << " ";
	cout << endl;

	return 0;
}
		
