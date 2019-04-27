//rotation cipher encoding practice


#include <stdio.h>
#include <string.h>


void rotation cipher(char* message, int key);

int main (void) {

    int key;
    char message[200]
    
    printf("enter the message to be encrypted");
    
        scanf(%s, message)
    
    printf("please enter key");
    
        scanf(%d, &key)
    
    printf("your encrypted code is:" %s);
    

 }

void rotation cipher(char* message, int key){     
   
   int i=0;
   int cipher value;
    char cipher;

while( message[i]!= '0' && strlen(message)-1 >i, i++){
   cipher value= ((int)message[i]-97 + key) %26 +97
   cipher= (char)(cipher value)
    

printf("%s, cipher")
}

}

