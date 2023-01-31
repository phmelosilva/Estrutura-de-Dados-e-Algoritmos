#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAX_LEN 100005

char expr[MAX_LEN];
char stack[MAX_LEN];
int top = -1;

bool is_empty() {
    return top == -1;
}

void push(char c) {
    stack[++top] = c;
}

char pop() {
    return stack[top--];
}

bool is_pair(char open, char close) {
    return (open == '(' && close == ')') ||
           (open == '[' && close == ']') ||
           (open == '{' && close == '}');
}

bool is_valid_expression(char *expr) {
    int len = strlen(expr);
    for (int i = 0; i < len; i++) {
        if (expr[i] == '(' || expr[i] == '[' || expr[i] == '{') {
            push(expr[i]);
        } else {
            if (is_empty() || !is_pair(pop(), expr[i])) {
                return false;
            }
        }
    }
    return is_empty();
}

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        scanf("%s", expr);
        top = -1;
        if (is_valid_expression(expr)) {
            printf("S\n");
        } else {
            printf("N\n");
        }
    }
    return 0;
}
