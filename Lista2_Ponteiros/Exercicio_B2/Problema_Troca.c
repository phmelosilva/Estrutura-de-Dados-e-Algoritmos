void swap(int *a, int *b)
{
    int interm = *a;
    *a = *b;
    *b = interm;
    // printf("pontA:%d\n",*a);
    // printf("pontB:%d\n",*b);
}

// int main() {
//     int n1, n2;
//     scanf("%d%d", &n1, &n2);
//     printf("pontA: %d\n", n1);
//     printf("pontB: %d\n", n2);
//     printf("\n\n");
//     swap(&n1, &n2);
//     return 0;
// }