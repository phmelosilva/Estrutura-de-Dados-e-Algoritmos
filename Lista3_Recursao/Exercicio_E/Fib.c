long int fibonacci(int n) {
    long int fibmen[81];
    fibmen[1]=1;
	fibmen[2]=1;
	for (int i=3; i < 81; i++) {
		fibmen[i] = -1;
	}
    if (fibmen[n] != -1) return fibmen[n];
	fibmen[n] = fibonacci(n-1)+fibonacci(n-2);
	return fibmen[n];
}