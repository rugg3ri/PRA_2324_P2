#include <iostream>
#include <vector>
#include "DyV.h"
#include <string>
using namespace std;

int main(){
	vector<int>vecInt = {1,3,6,9,13};
	int posInt = BusquedaBinaria(9, vecInt, 0, vecInt.size() - 1);
	cout <<"Posicion del 9 en vecInt: " << posInt << endl;

	vector<float>vecFlt = {1.2f, 4.5f, 3.5f, 7.8f, 2.2f};
	int posFlt = BusquedaBinaria(1.2f, vecFlt, 0, vecFlt.size() - 1);
	cout << "Posicion del 1.2f en vecFlt: " << posFlt << endl;

	vector<string>vecStr = {"hola", "adios", "chao", "yes"};
	int posStr = BusquedaBinaria(string("yes"), vecStr, 0,vecStr.size() - 1);
	cout << "Posicion de \"yes\" en vecStr: " << posStr << endl;
	
	vector<char>vecChr = {'a', 'b', 'c','d','e'};
	int posChr = BusquedaBinaria('d', vecChr, 0, vecChr.size() - 1);
	cout << "Posicion del 'd' en vecChr: " << posChr << endl;
	
	return 0;
}
		
