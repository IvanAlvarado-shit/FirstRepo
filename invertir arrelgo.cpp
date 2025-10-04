#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void invierteArreglo (int[], int, int);
void invierteArregloC (char[], int, int);
void llenaArreglo (int[], int, int);
void imprimeArreglo (int[], int);
void imprimeArregloC (char[], int);
int Fpalindromo (char[], int);


int main () {
	
	int n = 5;
	int arreglo [500];	
	
	llenaArreglo(arreglo, n, 0);
	imprimeArreglo(arreglo, n);
	
	printf("\n");
	
	invierteArreglo(arreglo, n, 0);
	imprimeArreglo(arreglo, n);
	
	printf("\n");

	char palindromo[100];
	scanf("%s", palindromo);
	int nP = strlen(palindromo);
	
	printf("\n");
	int xdxd = Fpalindromo(palindromo, nP);
	printf("%d", xdxd);
}

void llenaArreglo (int arreglo[], int n, int i){
	if (i < n){
		arreglo[i] = i+1;
		llenaArreglo(arreglo, n, i+1);
	}
}

void imprimeArreglo (int arreglo[], int n) {
	if (n > 0){
		imprimeArreglo (arreglo, n-1);
		printf("%d\t", arreglo[n-1]);
	}	
}

void imprimeArregloC (char arreglo[], int n) {
	if (n > 0){
		imprimeArregloC (arreglo, n-1);
		printf("%c", arreglo[n-1]);
	}	
}	
void invierteArreglo (int arreglo[], int n, int i){
	if (n > 0 && i < n){
		int xd = arreglo[i];
		arreglo[i] = arreglo[n-1];
		arreglo[n-1] = xd;
		invierteArreglo (arreglo, n-1, i+1);		
	}	
}

void invierteArregloC (char arreglo[], int n, int i){
	if (n > 0 && i < n){
		int xd = arreglo[i];
		arreglo[i] = arreglo[n-1];
		arreglo[n-1] = xd;
		invierteArregloC (arreglo, n-1, i+1);		
	}	
}

int Fpalindromo (char palabra[], int n){
	char copia[100];
	strcpy(copia, palabra);
	invierteArregloC (copia, n, 0);
	return strcmp(palabra, copia) == 0;
	
}



