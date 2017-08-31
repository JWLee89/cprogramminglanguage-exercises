void one_word_per_line() {
    int c;
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t') {
            putchar('\n');
        } else {
            putchar(c);
        }
    }
}
