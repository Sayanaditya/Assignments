#include <stdio.h>
#include <stdlib.h>

int str_length(char *str) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}

void reverse(char *start, char *end) {
    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

char* reverse_words(char *str) {
    int len = str_length(str);
    char *result = (char*)malloc((len + 1) * sizeof(char));
    if (!result) return NULL;
    
    for (int i = 0; i <= len; i++) {
        result[i] = str[i];
    }
    
    char *start = result, *end = result;
    while (*end != '\0' && *end!='\n') {
        if (*end == ' ') {
            reverse(start, end - 1);
            start = end + 1;
        }
        end++;
    }

    reverse(start, end - 1); // reverses the last word
    
    return result;
}

int main() {
    char str1[1000];
    fgets(str1,1000,stdin);
    char *str2 = reverse_words(str1);
    printf("%s", str2);
    return 0;
}