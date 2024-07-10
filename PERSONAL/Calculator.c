#include <stdio.h>
void add();
void sub();
void multiply();
void division();

int main(){
char choice;
printf("Which operation do you want to use\n");
printf("+ --> addition\n");
printf("- --> subtraction\n");
printf("x --> multiplication\n");
printf("/ --> division\n");
printf("Enter your choice: ");
scanf(" %c", &choice);

if (choice == '+') {
    add();
} else if (choice == '-') {
    sub();
} else if (choice == 'x') {
    multiply();
} else if (choice == '/') {
    division();
} else {
    printf("invalid choice\n");
}


return 0;

}


void add() {

    int a, b, result;

    printf("Enter 2 integers: ");
    scanf("%d %d", &a, &b);
    result = a + b;

    printf("%d + %d = %d\n", a, b, result);
}

void sub() {

    int a, b, result;

    printf("Enter 2 integers: ");
    scanf("%d %d", &a, &b);
    result = a - b;

    printf("%d - %d = %d\n", a, b, result);
}

void multiply() {

    int a, b, result;

    printf("Enter 2 integers: ");
    scanf("%d %d", &a, &b);
    result = a * b;

    printf("%d * %d = %d\n", a, b, result);
}

void division() {

    int a, b, result;

    printf("Enter 2 integers: ");
    scanf("%d %d", &a, &b);
    result = a / b;

    printf("%d / %d = %d\n", a, b, result);
}