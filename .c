#include <stdio.h>

int main()
{
    // my role is 077, i can't take 0, because if i take 0 infront of int value, in c language it consider as octal number.
    // then if i take 077 it is a octal, in c it will convert to decimal that is 63.

    // my role is 084, i can't take 0, because if i take 0 infront of int value, in c language it consider as octal number.
    // then if i take 084 it is a octal, but in octal number 8 is not present. so it will gives error.
    int x = 077, y = 777;
    char op;

    printf("Enter an operator (+, -, *, /, &, |, ^, ~, < for left shift, > for right shift): ");
    scanf(" %c", &op); // Take the operator as input

    switch (op)
    {
    case '+':
        printf("%d + %d = %d\n", x, y, x + y);
        break;
    case '-':
        printf("%d - %d = %d\n", x, y, x - y);
        break;
    case '*':
        printf("%d * %d = %d\n", x, y, x * y);
        break;
    
    case '/':
        printf("%d / %d = %d\n", x, y, x / y);
        break;
    
    case '%':
        printf("%d %% %d = %d\n", x, y, x % y);
        break;
    

        // bitwish operator//
    case '&':
        printf("%d & %d = %d\n", x, y, x & y);
        break;
    case '|':
        printf("%d | %d = %d\n", x, y, x | y);
        break;
    case '^':
        printf("%d ^ %d = %d\n", x, y, x ^ y);
        break;
    case '~':
        printf("~%d = %d\n", x, ~x);
        printf("~%d = %d\n", y, ~y);
        break;
    case '<':
        printf("%d << 2 = %d\n", x, x << 2);
        printf("%d << 2 = %d\n", y, y << 2);
        break;
    case '>':
        printf("%d >> 2 = %d\n", x, x >> 2);
        printf("%d >> 2 = %d\n", y, y >> 2);
        break;
    default:
        printf("Invalid operator!\n");
    }

    return 0;
}