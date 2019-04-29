/*Rotation (caesar) cipher 
The rotation cipher allows the user to encrypt a message by rotating the letters.
    This code provides the ability to have a message input via an external input run command
        However the key may be input as will be explained below. 
        

*/


#include <stdio.h>
#include <stdlib.h>



void rotation_cipher(char* message, int key); //The function definition is of void as it will not need to return anything

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

    
    int key=25; // User hardcodes the key of rotation they desire.
    
    printf("Enter the message to be encrypted\n");//this provides a menu look and keeps the code neat 
    
    
    
    printf("Please hardcode key\n"); // Formal instruction and reminder that the key needs to be input
    
        
 printf("Your message is: \n"); // print the message 
rotation_cipher(message,key); // calling the cipher function whilst inside the main function

   

fclose(msg);
return 0;
 }
 

void rotation_cipher(char *message, int key)
{     
   
int i=0; // declaring the integer at 0 to let the compiler know to start rotating at the first charachter of messaage

while( message[i]!= 0) // essentially when the message does not equal 0 or NULL then follow this process listed below
{
    
    if (message[i]>64 && message[i]<91) // this ensures the letter is upper case in order to meet the required needs
    {
        message[i]=message[i]+key;//the main decryption movement ensuring that the 'message' text and 'key' integer are utilised from main function 
    
        
        if(message[i]>90) 
        // as ASCII charachters go all through to 127 this ensures the rotation doesnt pick up any symbols or lower case letters.
        {
            message[i]=message[i]-26;
        }
    }  

i++; // incrementing i to ensure the function doesnt get caught in an infinite loop.
}
puts(message); // essentially the print function for the message after it has been calculated in the function 
}

