#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Personal {
    char name[15];
    int bornYear;
    char phoneNumber[11];
    char address[20];
} Personal;

void write_address(FILE *fptr, Personal *ptr) {
    fprintf(fptr, "%s %d %s %s\n", ptr->name, ptr->bornYear, ptr->phoneNumber, ptr->address);
}

void read_address(FILE *fptr) {
    char name[15];
    int bornYear;
    char phoneNumber[11];
    char address[20];
    while (1) {
        fscanf(fptr, "%s %d %s %s", name, &bornYear, phoneNumber, address);
        if (feof(fptr)) {
            break;
        }
        printf("%s %d %s %s\n", name, bornYear, phoneNumber, address);
    }
}

void delete_address(FILE *fptr, char *name) {
    char *tmpFile = "addressBook.tmp";
    char *origFile = "addressBook.txt";
    char fname[10];
    int fbornYear;
    char fphoneNumber[11];
    char faddress[20];
    FILE *tmp;
    tmp = fopen(tmpFile, "w");
    if (name[0] == 'q' && strlen(name) == 1) {
        puts("PASS");
        return;
    }
    if (tmp == NULL) {
        puts("tmp file error");
        return;
    }
    while (1) {
        fscanf(fptr, "%s %d %s %s", fname, &fbornYear, fphoneNumber, faddress);
        if (feof(fptr)) {
            break;
        }
        if (strcmp(fname, name) != 0) {
            fprintf(tmp, "%s %d %s %s\n", fname, fbornYear, fphoneNumber, faddress);
        }
    }
    remove(origFile);
    rename(tmpFile, origFile);
}

    


int main(int argc, char *argv[])
{
    FILE *fptr;
    Personal *ptr;
    int size;
    char name[15];
    int nameLen, addressLen, deleteNameLen;
    int bornYear;
    char phoneNumber[11];
    char address[20];
    char deleteName[15];

    fptr = fopen("addressBook.txt", "a+");
    if (fptr == NULL) {
        puts("fptr error");
    }
    printf("Size of address book: ");
    scanf("%d", &size);
    getchar();
    for (int i=0; i<size; ++i) {
        ptr = malloc(sizeof(Personal));
        printf("Input Name: ");
        fgets(name, 15, stdin);
        nameLen = strlen(name) - 1;
        name[nameLen] = '\0';
        printf("Input bornYear: ");
        scanf("%d", &bornYear);
        getchar();
        printf("Input phoneNumber: ");
        fgets(phoneNumber, 11, stdin);
        getchar();
        printf("Input address: ");
        fgets(address, 20, stdin);
        addressLen = strlen(address) - 1;
        address[addressLen] = '\0';

        strcpy(ptr->name, name);
        ptr->bornYear = bornYear;
        strcpy(ptr->phoneNumber, phoneNumber);
        strcpy(ptr->address, address);
        write_address(fptr, ptr);
        free(ptr);
    }

    rewind(fptr);
    read_address(fptr);

    printf("Input a name in the address book to delete (q to pass): ");
    fgets(deleteName, 15, stdin);
    deleteNameLen = strlen(deleteName) - 1;
    deleteName[deleteNameLen] = '\0';    
    rewind(fptr);
    delete_address(fptr, deleteName);

    return 0;
}
