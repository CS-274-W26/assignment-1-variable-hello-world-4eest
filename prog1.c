#include <stdio.h> // Necessary for printf()

#include <stdlib.h> // Necessary for rand() and srand()
#include <time.h> // Necessary for time()


int main() {
	srand(time(NULL)); // Seed the random number generator
	int myrand = rand() % 11; // Generate a random number between 0 and 10 inclusive

	// Print different messages based on the value of myrand
	if (myrand >= 0 && myrand <= 4) {
		printf("Eat more beef, kick less cats\n");
	} else if (myrand >= 5 && myrand <= 9) {
		printf("FRODO LIVES\n");
	} else if (myrand == 10) {
		printf("Larn is the best roguelike\n");
	}

	// Print the generated random number
	printf("The random number was: %d\n", myrand);

	return 0;
}
