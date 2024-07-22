// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>

// #define MAX 50

// char stack[MAX];
// int top = -1;

// void push(char item)
// {
//     stack[++top] = item;
// }

// char pop()
// {
//     return stack[top--];
// }

// int precedence(char symbol)
// {
//     if (symbol == '^')
//         return 3;
//     else if (symbol == '*' || symbol == '/')
//         return 2;
//     else if (symbol == '+' || symbol == '-')
//         return 1;
//     else
//         return 0;
// }

// void reverseString(char *str)
// {
//     int length = strlen(str);
//     for (int i = 0, j = length - 1; i < j; i++, j--)
//     {
//         char temp = str[i];
//         str[i] = str[j];
//         str[j] = temp;
//     }
// }

// int main()
// {
//     printf("Enter infix expression: ");
//     char infix[MAX];
//     scanf("%s", infix);

//     reverseString(infix);

//     char prefix[MAX];
//     int j = 0;

//     for (int i = 0; infix[i] != '\0'; i++)
//     {
//         if (isalnum(infix[i]))
//             prefix[j++] = infix[i];
//         else if (infix[i] == ')')
//             push(infix[i]);
//         else if (infix[i] == '(')
//         {
//             while (top != -1 && stack[top] != ')')
//                 prefix[j++] = pop();
//             pop(); // Pop the ')'
//         }
//         else
//         {
//             while (top != -1 && precedence(stack[top]) >= precedence(infix[i]))
//                 prefix[j++] = pop();
//             push(infix[i]);
//         }
//     }

//     while (top != -1)
//         prefix[j++] = pop();

//     prefix[j] = '\0';
//     reverseString(prefix);

//     printf("Prefix expression: %s\n", prefix);

//     return 0;
// }
