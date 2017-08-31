void print_word_hist() {
    int c;
    int wordCount = 0;
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n') {    // '\n' to capture enter key
            putchar(' ');
            while (wordCount != 0) {
                putchar('-');
                wordCount--;
            }
            printf("\n");   
        } else {
            wordCount++;
            putchar(c);
        }
    }
    printf("word count: %d ", wordCount);
}
