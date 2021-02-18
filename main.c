#include <stdio.h>
#include <string.h>
int isContains(char kelime[],char harf);
int  isAnagram(char str1[] , char str2[]);
int main() {
    char str1[20];
    char str2[20];
    printf("Enter the first string ");
    gets(&str1);
    printf("Enter the second string ");
    gets(&str2);
    if(isAnagram(str1,str2)==0){
        printf("No ! They are not anagrams !");
    }
    else{
        printf("Yes ! They are  anagrams !");
    }
    return 0;
}

int  isAnagram(char str1[] , char str2[]){
    int arr1[20],arr2[20];
    if(strlen(str1)!=strlen(str2)){
        return 0;
    }
    else{
        for(int i=0;i<str1[i]!='\0';i++){
            if(isContains(str2,str1[i])==0){
                return 0;
            }

        }
        return 1;
    }

}
int isContains(char kelime[],char harf){
    for(int i=0;i<strlen(kelime);i++){
        if(kelime[i]==harf)
            return 1;
    }
    return 0;
}
