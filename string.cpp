#include <string>
#include <map>

using namespace std;

string lowerCase(string s) {
	for (int i = 0; i < (int)s.length(); i++)
		if (s[i] >= 'A' && s[i] <= 'Z')
			s[i] += 32;

	return s;
}

string upperCase(string s) {
	for (int i = 0; i < (int)s.length(); i++)
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;

	return s;
}

map<char, string> morseMapAlphabet = {
	{'a', ".-"}, {'b', "-..."}, {'c', "-.-."}, {'d', "-.."}, {'e', "."}, {'f', "..-."},
	{'g', "--."}, {'h', "...."}, {'i', ".."}, {'j', ".---"}, {'k', "-.-"}, {'l', ".-.."},
	{'m', "--"}, {'n', "-."}, {'o', "---"}, {'p', ".--."}, {'q', "--.-"}, {'r', ".-."},
	{'s', "..."}, {'t', "-"}, {'u', "..-"}, {'v', "...-"}, {'w', ".--"}, {'x', "-..-"},
	{'y', "-.--"}, {'z', "--.."}
};

string morse(string word) {
	string wordMorse = "";
	word = lowerCase(word);
	for (int i = 0; i < (int)word.length(); i++)
		wordMorse += morseMapAlphabet[word[i]];
	
	return wordMorse;
}

int main() {
	return 0;
}
