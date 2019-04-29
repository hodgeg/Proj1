/*The rotation(caesar) cipher is an encoding tool used to encode a message by rotating 
    the letters of the message to appear as random letters
- A key is also required to be hardcoded in where applicable
        the key will determine the amount of letters to the right the code will rotate the charachters
        
            this specific code will decrypt a message previously encoding with a rotation cipher when provided the key
        

*/
#include <stdio.h>
#include <stdlib.h>



void rotation_cipher(char* message, int key); // the function definition is declared at the start to be called later

int main (void) { // main function is of type void as we dont require it to recycle anything
    FILE*msg;
    msg=fopen("input","r"); // creating files as a solution to allow whitespace in the code otherwise it would not include a space charachter 
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
    i++; // increment the integer of i to ensure there is no infinite loop
}

    
    int key=1; 
    //key needs to be input by the user
    
    printf("Please Enter the message to be encrypted\n"); 
    // creating a menu like look to create a neat input page
    
    
    
    printf("Please hardcode key\n");
    
        
 printf("Your message is: \n");  
rotation_cipher(message,key);

   

fclose(msg);
return 0;
 }
 

void rotation_cipher(char *message, int key)
// function prototype is called here with the data type and calling the 'message' and 'key' from the int main 
{     
   
int i=0; // declaring the int variable as 0 to start the cipher function with the first charachter of message input
while( message[i]!= 0)
// while loop to ensure that the code only accepts a message that is not a NULL charachter
{
    
    if (message[i]>64 && message[i]<91)// ensuring that the code is an UPPER CASE charachter as the ascii code goes up to 127 
    {
        message[i]=message[i]-key;// the main 
    
        
        if(message[i]<65) // ensures the code does not exceed the ASCII code of the upper case letters to ensure a symbol or lower case letter gets pulled into the rotation 
        {
            message[i]=message[i]-26; 
        }
    }  
i++;// incrementing i to ensure there is no infinite loop 
}
puts(message); // essentially the print function which sends the now rotated message back to the main print function 
}

