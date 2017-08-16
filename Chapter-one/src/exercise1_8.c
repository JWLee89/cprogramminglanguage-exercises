int count_blank_tabs_newlines(char * str) {
    char * c = NULL;
    int count = 0;
    for (c = str; *c != '\0'; c++) {
        if (*c == '\n' || *c == '\t' || *c == ' ') {
            count++;
        }
        c++;
    }
    return count;
}
