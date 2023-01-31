#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100

typedef struct stack {
    int top;
    char items[MAX];
} Stack;

void push(Stack *sp, char x) {
    if (sp->top == MAX - 1) {
        printf("stack overflow");
        return;
    }
    sp->items[++sp->top] = x;
}

char pop(Stack *sp) {
    if (sp->top == -1) {
        printf("stack underflow");
        exit(1);
    }
    return sp->items[sp->top--];
}

int bem_formada(char s[]) {
    int i = 0;
    Stack pilha;
    pilha.top = -1;
    int len = strlen(s);
    while (i < len) {
        if (s[i] == '(' || s[i] == '[' || s[i] == '{')
            push(&pilha, s[i]);
        else if (s[i] == ')' || s[i] == ']' || s[i] == '}') {
            if (pilha.top == -1)
                return 0;
            char x = pop(&pilha);
            if ((s[i] == ')' && x != '(') ||
                (s[i] == ']' && x != '[') ||
                (s[i] == '}' && x != '{'))
                return 0;
        }
        i++;
    }
    return (pilha.top == -1);
}

int main() {
    int t = 0;
    while (++t < 5) {
        printf("Caso %d:\n", t);
        char s[MAX];
        scanf("%s", s);
        printf("string: %s\n", s);
        printf("%d\n", bem_formada(s));
    }
    return 0;
}
