#include <iostream>
#include <string>
#include <map>

string lowerCase(string s) {
	char c;
	for (int i = 0; i < (int)s.length(); i++) {
		c = s[i];
		if (c >= 'A' && c <= 'Z')
			s[i] = c + 32;
	}
	
	return s;
}

map<char, string> morseMapAlphabet {
	{'a', ".-"}, {'b', "-..."}, {'c', "-.-."}, {'d', "-.."}, {'e', "."}, {'f', "..-."},
	{'g', "--."}, {'h', "...."}, {'i', ".."}, {'j', ".---"}, {'k', "-.-"}, {'l', ".-.."},
	{'m', "--"}, {'n', "-."}, {'o', "---"}, {'p', ".--."}, {'q', "--.-"}, {'r', ".-."},
	{'s', "..."}, {'t', "-"}, {'u', "..-"}, {'v', "...-"}, {'w', ".--"}, {'x', "-..-"},
	{'y', "-.--"}, {'z', "--.."}
}

string morse(string word) {
	word = lowerCase(word);
	for (int i = 0; i < (int)word.length(); i++)
		word[i] = morseMapAlphabet[word[i]];
	
	return word;
}

int main() {
	return 0;
}
