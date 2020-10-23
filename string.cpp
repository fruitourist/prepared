#include <iostream>
#include <string>

string lowerCase(string s) {
	char c;
	for (int i = 0; i < (int)s.length(); i++) {
		c = s[i];
		if (c >= 'A' && c <= 'Z')
			s[i] = c + 32;
	}
	
	return s;
}

int main() {
	return 0;
}
