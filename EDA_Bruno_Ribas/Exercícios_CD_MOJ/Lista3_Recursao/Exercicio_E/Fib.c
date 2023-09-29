long int fibmen[81] = {[2 ... 80] = -1};
long int fibonacci(int n) {
    fibmen[1]=1;
	fibmen[2]=1;
    if (fibmen[n] != -1) return fibmen[n];
	fibmen[n] = fibonacci(n-1)+fibonacci(n-2);
	return fibmen[n];
}