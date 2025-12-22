#include <stdio.h>

int main() {
    int score = 0;
    char answer;

    printf("=== MINI QUIZ GAME ===\n\n");

    // Question 1
    printf("1. What is the capital of France?\n");
    printf("a) Berlin\nb) Madrid\nc) Paris\nd) Rome\n");
    printf("Your answer: ");
    scanf(" %c", &answer);

    if (answer == 'c' || answer == 'C') {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! Correct answer is c) Paris\n\n");
    }

    // Question 2
    printf("2. Which language is used for system programming?\n");
    printf("a) Python\nb) Java\nc) C\nd) HTML\n");
    printf("Your answer: ");
    scanf(" %c", &answer);

    if (answer == 'c' || answer == 'C') {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! Correct answer is c) C\n\n");
    }

    // Question 3
    printf("3. How many days are there in a week?\n");
    printf("a) 5\nb) 6\nc) 7\nd) 8\n");
    printf("Your answer: ");
    scanf(" %c", &answer);

    if (answer == 'c' || answer == 'C') {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! Correct answer is c) 7\n\n");
    }

    // Final Score
    printf("=== QUIZ OVER ===\n");
    printf("Your final score: %d / 3\n", score);

    return 0;
}
