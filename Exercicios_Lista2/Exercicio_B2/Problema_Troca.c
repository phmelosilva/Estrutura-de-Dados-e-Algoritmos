void swap(int *a, int *b)
{
    int *interm = a;
    a = b;
    b = interm;
    printf("pontA:%d\n",a);
    printf("pontB:%d\n",b);
}
