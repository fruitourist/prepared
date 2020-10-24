bool isPrime(int n) {
	if (n <= 1)
		return false;

	for (int i = 2; i < n; i++)
		if (n % i == 0)
			return false;

	return true;
}

bool isPowerOfTwo(int n) {
	return n && !(n & (n - 1));
}

int main() {
	return 0;
}
