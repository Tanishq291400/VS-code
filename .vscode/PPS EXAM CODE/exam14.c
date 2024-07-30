#include <stdio.h>

int main() {
    FILE *fp1, *fp2;
    char ch;

    fp1 = fopen("source.txt", "r");
    fp2 = fopen("destn.txt", "w");
    if (fp1 == NULL || fp2 == NULL) {
        printf("Error opening file\n");
        return 1;
    }
    while ((ch = fgetc(fp1))!= EOF) {
        fputc(ch, fp2);
    }
    fclose(fp1);
    fclose(fp2);
    printf("File copied successfully\n");
    return 0;
}