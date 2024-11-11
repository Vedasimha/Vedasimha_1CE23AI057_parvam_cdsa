    #include<stdio.h>
    int main() {
        char let;
        printf("Enter the alphabet: ");
        scanf("%s", &let);
        if (let == 'a' || let == 'e' || let == 'i' || let == 'o' || let == 'u' )
        printf("The alphabet is a vowel.");
        else
            printf("It is a consonant");
    }