
int isVowel(char c) {
    return c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||
           c=='A'||c=='E'||c=='I'||c=='O'||c=='U';
}
int cmpChar(const void* a, const void* b) {
    return (*(char*)a - *(char*)b);  // sort by ASCII
}

char* sortVowels(char* s) {
    int n = strlen(s);
    char* res = (char*)malloc((n+1)*sizeof(char));
    strcpy(res, s);

    // collect vowels
    char* vowels = (char*)malloc(n * sizeof(char));
    int vcount = 0;
    for (int i=0; i<n; i++) {
        if (isVowel(s[i])) {
            vowels[vcount++] = s[i];
        }
    }

    qsort(vowels, vcount, sizeof(char), cmpChar);

    // replace vowels in sorted order
    int idx = 0;
    for (int i=0; i<n; i++) {
        if (isVowel(res[i])) {
            res[i] = vowels[idx++];
        }
    }

    res[n] = '\0';
    free(vowels);
    return res;
}