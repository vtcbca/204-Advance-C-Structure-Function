/* WAP to create sturcture student(sid,sname) and print it.
  Date: 3/4/2021
*/

#include<stdio.h>
#include<conio.h>

struct student    // create datatype of student
{
   int  sid;  //struct. member
   char sname[30]; // struct member.
};

// sid and sname declare inside the structure student and it is known as structure member.

void main()
{
   struct student s;  //s is a variable of student datatype.
   int a; // a is variable of integer data type
   clrscr();

   // input value into structure varible.

   printf("\n Enter student id :");
   scanf("%d",&s.sid);
   printf("\n Enter student name:");
   scanf("%s",&s.sname);

   //Print structure variable

   printf("\n\n%d \t %s",s.sid,s.sname);
   getch();
}
