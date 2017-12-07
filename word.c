#include <stdio.h>
  #include <string.h>

  int main() {
        char str[512], word[256];
        int a = 0, b = 0;


        printf("Enter your input string: \n");
        fgets(str, 512, stdin);
        str[strlen(str) - 1] = '\0';


        if (str[0] == '\0') {
                printf("Input string is NULL\n");
                return 0;
        }


        while (str[a] != '\0') {

                if (str[a] == ' ') {
                        word[b] = '\0';
                        printf("%s\n", word);
                        b = 0;
                } else {
                        word[b++] = str[a];
                }
                a++;
        }

        word[b] = '\0';


        printf("%s\n", word);
        return 0;
  }
