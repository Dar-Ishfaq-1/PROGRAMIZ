#include <stdio.h>

struct employee {
    int code;
    char name[30];
    float salary;
};

int main() {
    int i, key, flag = 0, pos = -1;
    
    struct employee a[4];

    for (i = 0; i < 4; i++) {
        printf("\nEnter the code: ");
        scanf("%d", &a[i].code);
        printf("\nEnter the name: ");
        scanf("%s", a[i].name);
        printf("\nEnter the salary: ");
        scanf("%f", &a[i].salary);
    }

    printf("\nEnter the employee code to search: ");
    scanf("%d", &key);

    for (i = 0; i < 4; i++) {
        if (a[i].code == key) {
            flag = 1;
            pos = i;
            break;
        }
    }

    if (flag == 1) {
        printf("\nEmployee found at position: %d", pos);
        printf("\nCode: %d", a[pos].code);
        printf("\nName: %s", a[pos].name);
        printf("\nSalary: %.2f\n", a[pos].salary);
    } else {
        printf("\nEmployee not found\n");
    }

    return 0;
}
