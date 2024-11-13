#include <stdio.h>

// Define a struct to represent an employee
struct Employee {
    char name[50];
    int employeeId;
    double salary;
};

int main() {
    // Create an instance of the Employee struct
    struct Employee emp = {"John Doe", 1001, 50000.0};

    // Print the employee's details using a single printf statement
    printf("Employee Details:\nName: %s\nEmployee ID: %d\nSalary: %.2f\n",
           emp.name, emp.employeeId, emp.salary);

    return 0;
}
