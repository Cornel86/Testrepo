#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>




int main ()

{

	// The array contain 6 elements corresponding to number 1-6 on a dice
	// from index [0] = 1 index [5] = 6
	// We could rewrite the name of the array

	int dice_counts[6]={0};//every value starts from count 0
	int dice_roll;
	int i;

	//We write this to time NULL instead of srand(1) to get different random numbers

	srand (time(NULL));

	//Lets loop 100 times and count how many times each value is rolled

	for (i = 0; i < 100; i++)
	{
		dice_roll = rand() % 6 + 1;
		dice_counts[dice_roll-1]++;
	}


	// Print out the dice array after we assigned the new values from rand to
	// each index.
	// This will show us how us x times each index was given from rand

	for(i=0;i<6;++i)
	{
		printf("The value [%d] was rolled %d times.\n", i+1,dice_counts[i]);
	}


	return 0;

}
