#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <time.h>

#define DEFAULT_PASSWORD_LENGTH 13

int
getRandomASCIICode()
{
        int randomASCIICode = 0;
        while (randomASCIICode < 33 || randomASCIICode > 126) {
                randomASCIICode = (rand() % 93) + 33;
        }

        return randomASCIICode;
}

char
intToChar(int asciiCode)
{
        char Character = asciiCode;

        return Character;
}

bool
newlyGenerated(FILE* history, char* password, int passwordLength)
{
        char previous[passwordLength];
        while ( (previous = fgets(previous, passwordLength, history)) != EOF) {
                if (strcmp(previous, password) {
                        return false;
                }
        }
        return true;
}

void
generate(FILE* history, int passwordLength)
{
        char password[passwordLength];
        for (int i = 0; i < passwordLength; i++) {
                password[i] = intToChar(getRandomASCIICode());
        }
        if (newlyGenerated(history, password, passwordLength)) {
                fprintf(stdout, "%s", password);
                fprintf(history, "%s\n", password);
        } else {
                generate(history, passwordLength);
        }
}

int
main(int argc, char** argv)
{
        srand(time(NULL));
        int passwordLength;

        if (argc > 2) {
                fprintf(stderr, "Too many arguments passed. Exiting...\n");
                return 0;
        } else if (argc < 2) {
                passwordLength = DEFAULT_PASSWORD_LENGTH;
        } else {
                passwordLength = (atoi(argv[1]));
                if (passwordLength < 1) {
                        fprintf(stderr,
                                "Expected positive integer. Exiting...\n");
                        return 0;
                }
        }

        FILE* passwordHistory = fopen("history.txt", "a+");
        if (passwordHistory == NULL) {
                fprintf(stderr, "Could not open the file. Exiting...\n");
        }
        generate(passwordHistory, passwordLength);
        fclose(passwordHistory);

        return 0;
}
