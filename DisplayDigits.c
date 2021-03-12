/*
    Problem statement :
Accept string from user and return  digits from the string.
  
Input : "abcd xy"
Output : 0
 
Input : India21
Output : 21
 
 */
 
 #include<stdio.h>
 
 void DisplayDigits(char *Str)
 {
	 int iCount = 0;
	 
	 while(*Str != '\0')
	 {
		 if((*Str >= '0') && (*Str <= '9'))
		 {
			 printf("%c",*Str);
		 }
		 Str++;
	 }
 }
 
 #include<stdio.h>
 
 int main()
 {
   char crr[30];
   
   printf("Enter the string \n");
   scanf("%[^'\n']s",crr);
   
  DisplayDigits(crr);
   
 return 0;
 }
 
 /*
 
 output
 
 Enter the string
rautnikita03@gmail.com
03

*/