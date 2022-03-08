#include<iostream>
#include<cstring>
using namespace std;

void lengthofstring()
{
   int length;
   char string[20];
   cout << "\nEnter String: "  ;
   scanf("%s",&string);
   length = strlen(string);
   cout << "\nLength of string is: %d" << length;
}
//To copy one string into another
void copystring()
{
   char string2[20];
   char string[20];
   cout << "\nEnter String: ";
   scanf("%s",&string);
   strcpy(string2,string);
   cout << "\nCopied string is: %s" << string2;
}
//To concatenatation of 2 strings
void add()
{
   char string2[20];
   char string[20];
   char string3[20];
   cout << "\nEnter 1st String: ";
   scanf("%s",&string);
   cout << "\nEnter 2nd String: ";
   scanf("%s",&string2);
   cout << "\nAddition of 2 string: %s"<< strcat(string,string2);
}
//To compare 2 String
void compare()
{
   char string2[20];
   char string[20];
   cout << "\nEnter 1st String: ";
   scanf("%s",&string);
   printf("\nEnter 2nd String: ");
   scanf("%s",&string2);
   if(strcmp(string,string2)==0)
   {
   	    printf("\nBoth are equal");
   }
   else
   {
     	printf("\nBoth are different");
   }
}
int main()
{
    int c;
    do
   {
        cout << "\n\n1. Length of string\n2. Copy String \n3. Connect Two Strings \n4. Compare twostrings\n5. Exit\nEnter your choice:";
        scanf("%d",&c);
        switch(c)
       {
           case 1:lengthofstring();break;
           case 2:copystring();break;
           case 3:add();break;
           case 4:compare();break;
       }
   }while(c<5);
   return 0;
}
