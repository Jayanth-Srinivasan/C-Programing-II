int main() {
    char Str[100];
    int i;
    printf("\n Enter a String to Convert:");
    gets(Str);
    for (i=0; Str[i]!='\0';i++) {
        if(Str[i] >= 'A' && Str[i] <= 'Z') {
            Str[i] = Str[i] + 32;
        }
    }
    printf("\nLower Case: %s",Str);
    return 0;
}