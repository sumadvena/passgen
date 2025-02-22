#include <stdio.h>
#include <stdlib.h>
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

        for (int i = 0; i < passwordLength; i++) {
                fprintf(stdout, "%c", intToChar(getRandomASCIICode()));
        }

        return 0;
}
