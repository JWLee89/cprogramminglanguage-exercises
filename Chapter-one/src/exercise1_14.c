void print_char_freq_hist() {
    int charCountArr[52] = {0};   // for lower case and upper case characters. Initialize to zero.
    int c;
    int lowerCaseOffset = 97;
    int upperCaseOffset = 65;
    int alphabetCount = 26;

    // Calculate occurrence;
    while ((c = getchar()) != '\n') {
        // Lower case char
        if (c >= 97 && c <= 122) {
            charCountArr[c - lowerCaseOffset]++;
        } else if (c >= 65 && c <= 90) {
            charCountArr[c - upperCaseOffset + alphabetCount]++;    // Offset alphabet count
        }
    }
    // Print histogram
    for (int i = 0; i < 52; i++) {
        int currentCharOccurrence = charCountArr[i];
        char c;
        if (i < 26) {
            c = (char) (i + 97);
        } else {
            c = (char) (i + 65 + - alphabetCount); // minus 26 to offset for no of characters
        }
        printf("%c: ", c);
        for (int j = 0; j < currentCharOccurrence; j++) {
            printf("-");
        }
        printf("\n");
    }
}
