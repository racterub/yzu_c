#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>


// This is a linked-list
typedef struct list {
    char data[12];
    struct list *next;
} list;


// Initial list
list *ptr = NULL;

// Do the magic :)
void letterPerm(char *str, int cur, int len) {
    list *curr;
    list *tmp = ptr;
    // linked-list insert
    if (cur == len) {
        curr = malloc(sizeof(list));
        strcpy(curr->data, str);
        if (ptr == NULL) {
            ptr = curr;
        } else {
            while (tmp->next != NULL) {
                tmp = tmp->next;
            }
            tmp->next = curr;
        }
        return;
    }
    // recursive
    letterPerm(str, cur+1, len);
    if (str[cur] > '9') {
        str[cur] ^= (1<<5);
        /* str[cur] ^= (1<<5) can see as str[cur] ^= 32

        See 'A' and 'a' in binary form,
        'A' => 1000001
        'a' => 1100001

        'B' => 1000002
        'b' => 1100002

        ... etc

        you can see that their difference only one bit, and that bit in decimal is 32.

        By xoring 32, you can change caps easily

        And maybe you don't know why I'm doing this. It's because shifts and xor is faster.
        */

        // still recursive, but caps was changed
        letterPerm(str, cur+1, len);
    }
}

int main(int argc, char *argv[])
{
    char input[12] = {0};
    int inputLen;
    printf("Input string S: ");
    fgets(input, 12, stdin);
    inputLen = strlen(input) - 1;
    input[inputLen] = '\0';

    letterPerm(input, 0, inputLen);

    /*
    The global variable should be the list they want, but here I'm printing those out :)
     */

    // This is how linked-list do the iteration
    while (ptr != NULL) {
        printf("%s\n", ptr->data);
        ptr = ptr->next;
    }
    return 0;
}
