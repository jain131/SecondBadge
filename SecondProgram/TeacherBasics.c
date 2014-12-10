/*!*********************************************************************
*
* Original Author: Nishant Jain
*
* File Creation Date: 22 November 2014
*
* Description: A program that teaches the user about 
* different data types and modifiers 
*
**********************************************************************/
#include <stdio.h>
#include <string.h>

//Declaration of function prototype 
void DataTypes();
void Modifiers();

const int MAX=2;

/*!**********************************************************************
* Module Name: main
*
* Original Author: Nishant
*
* Module Creation Date: November 22, 2014
*
* Description: Calls DataTypes() and Modifiers acc. to user's choice
*
* Required Files/Databases:
* None
*
* Non System Routines Called:
* None
*
* Return Value:
* Type Description
* int return(0)
*
* OS Specific Assumptions:
* None
*
* Local Variables:
* Name Type Description
* check char To see if user wants to continue
* ch int User's choice of operation
* cont char To ask if user wants to continue or not
* 
***********************************************************************/
int main()
{
 int ch;
 char cont;
 
 do
 {
   printf("Hello there! I am your teacher for the day. \n");
   printf("What do you want to learn? \n 1)Data Types \n 2)Modifiers");
   scanf(" %d", &ch);

   if(ch==1)
   {
     DataTypes();
   }
   
   else if(ch==2)
   {
    Modifiers();
   }
 
   else printf("Select a valid option.");
   //Asking user to continue
   printf("Continue (Y/N)? \n");
   scanf(" %c", &cont);
   
 }while (cont=='Y' || cont=='y');
 
 
 return (0);
}  

/*!**********************************************************************
* Module Name: DataTypes
*
* Original Author: Nishant Jain
*
* Module Creation Date: November 23, 2014
*
* Description: This function teaches user about different data types
*
* Required Files/Databases:
* None
*
* Non System Routines Called:
* None
*
* Return Value: 
* None
*
* OS Specific Assumptions:
* None
*
* Local Variables:
* ch char-array Used to take input for user's choice 
* i int Used in do-while loop to reapeat loop on incorrect input
*
***********************************************************************/
void DataTypes()
{
  //local variable, array
  char ch[10];
  int i;

  printf("\nThere are four basic data types: char-character, "
  "int-integer, float, and double. \n");
  
  do
  {
    printf("Which data type do you want to learn about? \n");
    scanf(" %s", ch);
    i=0;
    
    /*
    * Conditions for user's choice of subject. 
    * Following can be interpreted as a database of req. info. on subject
    * Using <strcmp> to compare strings
    */
    if(strcmp(ch,"char")==0)
    {
      printf("char is a data type used to store a single "
      "character such as a number, text or special characters. \n"
      "Storage size: %lu bytes \nValue "
      "Range:-128 to 127 or 0 to 255 \n", sizeof(char));
    }
    
    else if(strcmp(ch,"int")==0)
    {  
      printf("int is a data type used to store numerical data. \n"
      "Storage size: %lu bytes  \nValue "
      "Range:-32,768 to 32,767  \n", sizeof(int));
    }

    else if(strcmp(ch,"float")==0)
    {
      printf("float is a data type used "
      "to store decimal numbers up to 6 decimal places. \n" 
      "Storage size: %lu bytes  \nValue "
      "Range:1.2E-38 to 3.4E+38 \n", sizeof(float));
    }

    else if(strcmp(ch,"double")==0)
    {
      printf("double is a data type used "
      "to store decimal numbers to up to 15 decimal places . \n"
      "Storage size: %lu bytes \nValue "
      "Range:2.3E-308 to 1.7E+308 \n", sizeof(double));
    }

    else
    { 
      //Repeating the input if an error
      printf("Input either 'char', 'int', 'float' or 'double'. \n");
      i=1;
    }  
  }while(i==1);
}


/*!**********************************************************************
* Module Name: Modifiers
*
* Original Author: Nishant Jain
*
* Module Creation Date: November 23, 2014
*
* Description: This function teaches user about different Modifiers
*
* Required Files/Databases:
* None
*
* Non System Routines Called:
* None
*
* Return Value: 
* None
*
* OS Specific Assumptions:
* None
*
* Local Variables:
* ch char-array Used to take input for user's choice 
* i int Used in do-while loop to reapeat loop on incorrect input
*
***********************************************************************/
void Modifiers()
{
  //local variable, string
  char ch[10];
  int i;

  printf("\nThere are five basic modifiers: signed, unsigned, short,"
  " long and const-constant. \n");
  
  do
  {
    i=0;
    printf("Which modifier do you want to learn about? \n");
    scanf(" %s", ch);
    
    /*
    * Conditions for user's choice of subject. 
    * Following can be interpreted as a database of req. info. on subject
    */
    if(strcmp(ch,"signed")==0)
    {
      printf("All data types are “signed” by default. Signed"
      " Data Modifier implies that the data type variable can"
      " store positive values as well as negative values."
      " \nFor example: signed int temperature; \n");

      printf("Size of signed int is %lu bytes\n", sizeof(signed int));
      printf("Size of signed char is %lu bytes\n", sizeof(signed char));

    }

    else if(strcmp(ch,"unsigned")==0)
    {
      printf("If we need to change the data type so that it"
      " can only store only store positive values,"
      " “unsigned” data modifier is used."
      " \nFor example: unsigned int salary; \n");

      printf("Size of unsigned int is %lu bytes\n", sizeof(unsigned int));
      printf("Size of unsigned short is %lu bytes\n", sizeof(unsigned short));
      printf("Size of unsigned long is %lu bytes\n", sizeof(unsigned long));
    } 

    else if(strcmp(ch,"short")==0)
    {
      printf("A “short” type modifier does"
      " just the opposite of “long”. If one is not expecting"
      " to see high range values in a program and the values"
      " are both positive & negative."
      " \nFor example: short int age; \n");
    }

    else if(strcmp(ch,"long")==0)
    { 
      printf("Sometimes while coding a program,"
      " we need to increase the Storage Capacity of a variable"
      " so that it can store values higher than its maximum limit,"
      " which is there as default. In such situations or programs,"
      " we need to make use of the “long” data type qualifier."
      " “long” type modifier doubles the “length” of the data"
      " type when used along with it."
      " \nFor example: long int turnover; \n");

      printf("Size of long double is %lu bytes\n", sizeof(long double));
    }

    else if(strcmp(ch,"const")==0)
    {
      printf("const sets the value of variable as"
      " constants. If the program tries to change the value of a"
      " constant variable, it displays an error. \nFor example:"
      " const int MAX=2; (Has been declared in the beginning.) \n");
    }

    else 
    { 
      //Repeating the input if an error 
      printf("Input either 'signed', 'unsigned', 'short',"
      " 'const' or 'long'. \n");
      i=1;
    }
  }while(i==1);
}