#include <stdio.h>

#define MAX 1000

int main(){
    char c;
    char word[MAX];
    int i = 0;

    while ( (c = getchar()) != '\n' ) {
	word[i++] = c;
    }

    printf("%s\n", word);
}
