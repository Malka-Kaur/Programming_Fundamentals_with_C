#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <ctype.h>

// Utility: compute gcd
int gcd(int a, int b) {
    while (b != 0) {
        int t = a % b;
        a = b;
        b = t;
    }
    return a;
}

// Utility: check primality
bool is_prime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

bool is_even(int n) { return (n % 2) == 0; }

// Termination helper: Shows reason, final score, and determines winner
void terminate_game(const char* reason, int p_score, int c_score) {
    printf("\n--------------------------------------------------------\n");
    printf("GAME TERMINATED: %s\n", reason);
    printf("FINAL SCORE -> YOU: %d | COMPUTER: %d\n", p_score, c_score);
    
    // Determine winner at time of termination
    if (p_score > c_score) {
        printf("RESULT: YOU WIN (on points)!\n");
    } else if (p_score < c_score) {
        printf("RESULT: COMPUTER WINS!\n");
    } else {
        printf("RESULT: IT'S A TIE!\n");
    }
    printf("--------------------------------------------------------\n");
    exit(0);
}

// Validates 0 or 1 input with 3 retries
int get_valid_binary_answer(int p_score, int c_score) {
    int ans;
    int attempts = 3;
    while (attempts > 0) {
        if (scanf("%d", &ans) == 1 && (ans == 0 || ans == 1)) {
            return ans;
        }
        while (getchar() != '\n'); 
        attempts--;
        if (attempts > 0) {
            printf("Invalid input! Please enter 0 or 1 (%d attempts left): ", attempts);
        }
    }
    terminate_game("Too many invalid answer attempts.", p_score, c_score);
    return -1; 
}

// Validates y/n input with 3 retries
char get_valid_hint_choice(int p_score, int c_score) {
    char resp;
    int attempts = 3;
    while (attempts > 0) {
        printf("Would you like a hint? (y/n): ");
        scanf(" %c", &resp);
        resp = tolower(resp);
        if (resp == 'y' || resp == 'n') {
            return resp;
        }
        while (getchar() != '\n'); 
        attempts--;
        if (attempts > 0) {
            printf("Invalid choice! Enter 'y' or 'n' (%d attempts left): ", attempts);
        }
    }
    terminate_game("Too many invalid hint prompt attempts.", p_score, c_score);
    return 'n';
}

int main(void) {
    srand((unsigned)time(NULL));
    int rounds = 5, player_score = 0, computer_score = 0, last_challenge = -1;

    printf("---------------------------Number Theory Game---------------------------\n\n");
    printf("                               [Rules] \n1. 5 rounds total.\n2. Correct answers earn points.\n");
    printf("3. Puzzles: Primality, Odd/Even, and GCD.\n4. 3 strikes for invalid inputs before termination!\n");
    printf("\n                            LET'S BEGIN!!\n\n");

    for (int r = 1; r <= rounds; ++r) {
        printf("                         ----- Round %d of %d -----\n", r, rounds);

        int puzzle_type = rand() % 3;
        if (r > 1 && puzzle_type == last_challenge) puzzle_type = (puzzle_type + 1) % 3;
        last_challenge = puzzle_type;

        if (puzzle_type == 0) {
            int n = rand() % 100 + 2;
            printf("Puzzle: Is %d a prime number? (1 for Yes, 0 for No): ", n);
            int answer = get_valid_binary_answer(player_score, computer_score);

            if (is_prime(n) == (answer == 1)) {
                printf("CORRECT! %d is %s prime.\n", n, is_prime(n) ? "" : "not");
                player_score += 2;
            } else {
                printf("INCORRECT. %d is %s prime.\n", n, is_prime(n) ? "" : "not");
                computer_score += 2;
                if (get_valid_hint_choice(player_score, computer_score) == 'y') {
                    printf("Hint: A prime number has only two divisors: 1 and itself.\n");
                }
            }
        } else if (puzzle_type == 1) {
            int a = rand() % 50, b = rand() % 50, sum = a + b;
            printf("Puzzle: Is the sum of %d and %d even? (1 for Yes, 0 for No): ", a, b);
            int answer = get_valid_binary_answer(player_score, computer_score);

            if (is_even(sum) == (answer == 1)) {
                printf("CORRECT! Sum %d is %s.\n", sum, is_even(sum) ? "even" : "odd");
                player_score += 2;
            } else {
                printf("INCORRECT. Sum %d is %s.\n", sum, is_even(sum) ? "even" : "odd");
                computer_score += 2;
                if (get_valid_hint_choice(player_score, computer_score) == 'y') {
                    printf("Hint: Even + Even = Even; Odd + Odd = Even; Even + Odd = Odd.\n");
                }
            }
        } else {
            int x = rand() % 50 + 1, y = rand() % 50 + 1;
            printf("Puzzle: Compute gcd(%d, %d): ", x, y);
            
            int user_ans, attempts = 3;
            bool valid_gcd = false;
            while (attempts > 0) {
                if (scanf("%d", &user_ans) == 1) {
                    valid_gcd = true;
                    break;
                }
                while (getchar() != '\n');
                attempts--;
                if (attempts > 0) printf("Please enter a valid number (%d attempts left): ", attempts);
            }
            if (!valid_gcd) terminate_game("Invalid numeric input for GCD.", player_score, computer_score);

            int g = gcd(x, y);
            if (user_ans == g) {
                printf("CORRECT! gcd(%d,%d) = %d.\n", x, y, g);
                player_score += 2;
            } else {
                printf("INCORRECT. gcd(%d,%d) = %d.\n", x, y, g);
                computer_score += 2;
                if (get_valid_hint_choice(player_score, computer_score) == 'y') {
                    printf("Hint: Use Euclid's algorithm: gcd(a, b) = gcd(b, a %% b).\n");
                }
            }
        }
        printf("Current score -> You: %d, Computer: %d\n\n", player_score, computer_score);
    }

    // Normal Game Over (If all 5 rounds are completed)
    printf("========================================================\n");
    printf("GAME COMPLETED!\n");
    printf("FINAL SCORE -> YOU: %d | COMPUTER: %d\n", player_score, computer_score);
    if (player_score > computer_score) printf("RESULT: YOU WIN!\n");
    else if (player_score < computer_score) printf("RESULT: COMPUTER WINS!\n");
    else printf("RESULT: IT'S A TIE!\n");
    printf("========================================================\n");

    return 0;
}