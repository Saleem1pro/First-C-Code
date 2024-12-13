#include <stdio.h>

int main() {
    int secret_number = 5;
    int guess_number;
    int guess_limit = 3;
    int i;

    printf("Welcome to the guessing game! You have %d attempts to guess the secret number.\n", guess_limit);

    for (i = 1; i <= guess_limit; i++) {
        printf("Guess Number %d: ", i);

        // Vérification du retour de scanf pour éviter un blocage
        if (scanf("%d", &guess_number) != 1) {
            printf("Invalid input. Please enter an integer.\n");

            // Nettoyage du buffer en cas d'entrée incorrecte
            while (getchar() != '\n');
            i--; // Répéter l'essai sans pénaliser l'utilisateur
            continue;
        }

        if (guess_number == secret_number) {
            printf("You won!\n");
            return 0;
        } else {
            if (i < guess_limit) {
                printf("Try again.\n");
            } else {
                printf("Sorry, you lost");
            }
        }
    }

    return 0;
}
