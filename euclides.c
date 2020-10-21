/*
	Análisis de Algoritmos - Práctica1
	Autores: Carlos Nevárez, Santiago Pérez
	Algoritmo de Euclides: Usamos este algoritmo para encontrar el MCD de dos números enteros.
	
*/
# include <stdio.h>
# include <stdlib.h>
# include <math.h>

# define FN 10

int euclides(int m, int n) {
	int r;
	while(n!=0) {
		r = m % n;
		m = n;
		n = r;
	}
	return m;
}

int fibonacci(int N) {
	int i, sig=1, act=0, temp=0;
	for(i=0; i<=N; i++){
		temp = act;
		act = sig;
		sig = sig + temp;
	}
	return act;
}

int main(){
	/*Generacion de m y n, con m>n*/
	int m = 270;
	int n = 192;
	printf(" - Algoritmo de Euclides -\n");
	printf(" euclides(m,n) = mcd(m,n)\n");
	printf(" euclides(%i,%i) = %i\n", m, n, euclides(m,n));
	
	/*int j;
	for(j=0; j<20; j++){
		printf(" F(%i) = %i\n", j, fibonacci(j));
	}*/
	
	return 0;
}
