#include <stdio.h> // for printf()
#include <stdlib.h> // for rand() and srand()
#include <time.h> // for time()


int main() {
	srand(time(NULL)); // Seed the prng
	int myrand = rand() % 11; // Generate a random number between 0 and 10 inclusive

	// Print different messages based on the random value
	if (myrand >= 0 && myrand <= 4) {
		printf("Eat more beef, kick less cats\n");
	} else if (myrand >= 5 && myrand <= 9) {
		printf("FRODO LIVES\n");
	} else if (myrand == 10) {
		printf("Larn is the best roguelike\n");
	}

	// Print the random number
	printf("The random number was: %d\n", myrand);

	return 0;
}
