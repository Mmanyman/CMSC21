#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

void scan_word(int occurences[26]) {
	char c;
	while ((c=getchar()) != '\n') {
		if (isalpha(c)){
			occurences[toupper(c) - 'A']++;
		}
	}
}

bool is_anagram(int occurences1[26], int occurences2[26]) {
	for (int i = 0; i < 26; i++) {
		if (occurences1[i] == occurences2[i]){
			continue;
		} 
		else {
			return false;
		}
	}
	return true;
}

int main(void) {

	int i,
		occurences1[26] = {0},
		occurences2[26] = {0};

	printf("Enter first word: ");
	scan_word(occurences1);

	printf("Enter second word: ");
	scan_word(occurences2);

	bool same = is_anagram(occurences1, occurences2);

	if (same == true) {
		printf("The words are anagrams.\n");
		return 0;
	}
	else{
		printf("The words are not anagrams.\n");
		return 0;
	}
}

