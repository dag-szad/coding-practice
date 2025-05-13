#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int calculate(string word);

int main(void)
{
    string first_word = get_string("Player 1: ");
    string second_word = get_string("Player 2: ");

    int first_score = calculate(first_word);
    int second_score = calculate(second_word);

    if (first_score > second_score) {
        printf("Player 1 wins!\n");
    } else if (second_score > first_score) {
        printf("Player 2 wins!\n");
    } else {
        printf("Tie!\n");
    }
}

int calculate(string word) {
    int player_score = 0;

    for (int i = 0, len = strlen(word); i < len; i++) {
        if (isupper(word[i])) {
            player_score += POINTS[word[i] - 'A'];
        } else if (islower(word[i])) {
            player_score += POINTS[word[i] - 'a'];
        }
    }

    return player_score;
}
