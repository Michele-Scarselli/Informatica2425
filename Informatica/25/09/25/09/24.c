//commento su una riga
/*
Esercizio:
Calcola la area di un triangolo 
*/
#include <stdio.h>


	int main(){
	float h,Area,b;
	b=0;//inizializzazione
	h=0;//inizializzazione
	printf("inserisci il valore della base: ");
	scanf("%f",&b);
	printf("inserisci il valore dell altezza: ");
	scanf("%f",&h);
	Area=(b*h)/2;//calcolo della area
	printf ("la area e %f",Area);
	
	return 0;
	}
