#include <stdio.h>

int length(char* string){
    int length = 0;
    int i = 0;
    while(*(string + i) != '\0'){
        length++;
        i++;
    }
    return length;
}

void reverse(char* string){
    if(length(string) == 0){
        return;
    }
    int begin = 0;
    int end = length(string) - 1;
    while(end > begin){
        char temp = *(string + begin);
        *(string + begin) = *(string + end);
        *(string + end) = temp;
        begin++;
        end--;
    }
}

int main() {
    char str[]= "asdadasdkdkdkdkdkdkkdasd";
    printf("%d ",length(str));
    reverse(str);
    printf("%s",str);
    return 0;
}
