#include "quick.hpp" 


//Input numberr//
int num[10] ={ 
	1,  3,  7, -9,  10,  6,  0,  8,  2,  9
};

//Declare a variable and * take all the argumnets//
int comp (const int *,const int *);
int main (void){
//Declare I variable//
	int i;
	printf("ORGINAL ARRAY: ");
//Joining to the for loop//
		for (i=0; i<10; i++) printf("%d", num[i]);
		printf("\n");
//Sording the massive in a right way
		qsort(num, 10, sizeof (int), (int(*)(const void*, const void*)) comp);
		printf("CORRECT SEQUENCE: ");
			for (i=0; i<10; i++) printf("%d ", num[i]);
			return 0;

	}	

//Shows the final value
int comp (const int *i,const int *j){
	return *i- *j;
}
