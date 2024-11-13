#include <stdio.h>

int main() {
    char str1[50];
    char str2[60];
    int i, j;
    
    printf("\nEnter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    
    printf("\nEnter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    
    i = 0;
    while (str1[i] != '\0') {
        i++;
    }
    
    j = 0;
    while (str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
    }
    str1[i] = '\0'; // Null-terminate str1
    
    printf("\nConcatenated string is %s", str1);

    return 0;
}
