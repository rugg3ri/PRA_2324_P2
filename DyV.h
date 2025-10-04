#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

template<typename T>
int BusquedaBinaria(T x,const vector<T>& v, int ini, int fin){
	if(ini > fin){
		return -1;
	}
	int medio = (ini + fin) / 2;
	if(v[medio] == x){
		return medio;
	}else if(v[medio] > x){
		return BusquedaBinaria(x, v, ini, medio-1);
	}else{
		return BusquedaBinaria(x, v, medio+1, fin);
	}
}

template<typename T>
int BusquedaBinaria_INV(T x,const vector<T>& v, int ini, int fin){
        if(ini > fin){
                return -1;
        }
        int medio = (ini + fin) / 2;
        if(v[medio] == x){
                return medio;
        }else if(v[medio] < x){
                return BusquedaBinaria_INV(x, v, ini, medio-1);
        }else{
                return BusquedaBinaria_INV(x, v, medio+1, fin);
        }
}

template <typename T>
int Particion(vector <T>& v, int ini, int fin){
	T x = v[fin];
	int i = ini;
	for(int j=ini; j < fin; j++){
		if(v[j] <= x){
			swap(v[i], v[j]);
			i++;
		}
	}	
	swap(v[i], v[fin]);
	return i;
}

template<typename T>
void QuickSort(vector <T>& v, int ini, int fin){
        if(ini < fin){
                int pivote = Particion(v, ini ,fin);
                QuickSort(v, ini, pivote - 1);
                QuickSort(v, pivote + 1, fin);
        }
}

