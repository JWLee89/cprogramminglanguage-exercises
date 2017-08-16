int main() {
   
   int c, lastc;

    lastc = NULL;
    while ((c = getchar()) != EOF) {
        if (c != ' ') {
            putchar(c);
        }
        if (c == ' ') {
            if (lastc != ' ') {
                putchar(c);
            }
        }
        lastc = c;
    }
}
