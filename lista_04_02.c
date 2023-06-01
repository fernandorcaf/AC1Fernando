#include <stdio.h>
#include <stdlib.h>

int main (void) {
	
	float vetr[5], vets[10], vetX[1];
	int tamVetX = 0;
	
	int i, j, k, l, m, n, o;
	for (i = 0; i < 5; i++) {
		printf("%d valor do vetor R: ", i+1);
		scanf("%f", &vetr[i]);
	}

	for (j = 0; j < 10; j++) {
		printf("%d valor do vetor S: ", j+1);
		scanf("%f", &vets[j]);
	}
	
	for (k = 0; k < 5; k++) {
		for (l = 0; l < 10; l++) {
			if (vetr[k] == vets[l]) {
				vetX[tamVetX] = vetr[k];
				tamVetX++;
			}
		}
	}
	
	for (o = 0; o < tamVetX; o++) {
	    printf("%1.2f\n", vetX[o]);
	}
	
	return 0;
}

