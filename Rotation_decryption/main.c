//rotation cipher encoding practice


#include <stdio.h>
#include <stdlib.h>



void rotation_cipher(char* message, int key);

int main (void) {
    FILE*msg;
    msg=fopen("input","r");
    if(msg==0)
    {
    perror("ERROR while opening the file.\n");
    exit(EXIT_FAILURE);
    }
    char ch, message[10000];
    int i=0;
    while((ch=fgetc(msg)) !=EOF)
{
    message[i]=ch;
    i++;
}

    
    int key=1;
    
    printf("Please Enter the message to be decrypted\n");
    
    
    
    printf("Please hardcode key\n");
    
        
 printf("Your message is: \n");  
rotation_cipher(message,key);

   

fclose(msg);
return 0;
 }
 

void rotation_cipher(char *message, int key)
{     
   
int i=0;
while( message[i]!= 0)
{
    
    if (message[i]>64 && message[i]<91)
    {
        message[i]=message[i]-key;
    
        
        if(message[i]<65)
        {
            message[i]=message[i]-26;
        }
    }  
i++;
}
puts(message);
}

