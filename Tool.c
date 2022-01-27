#include <stdio.h>
#include <stdlib.h>

int main (int argc , char *argv[] )
{

if(argc>1){
if(strcmp(argv[1],"--help")==0 || strcmp(argv[1],"-h")==0){
printf("DESCRIPTION: \n this project is file manager that -list files and directories.\n-change permissions of files.\n-make/delete files/directories.\n-create symbolic link files.\n-rename files/directories.\nit's usefull for user to manages files easily in the system.\n");

}
}
else{
 char path[100] , dest[100] , comm[200] ,f_name[100],x;
 
 while (1)
 {
  printf("1-List files/directories.\n2-change permission of files. \n3-Make file(s). \n4-Make directories(s). \n5-delete files. \n6-delete directors \n7-Create sympolic link files. \n8-Rename files/directories. \n9-Exit\n");
  int c;
  scanf("%d",&c);
  x=getchar();
  switch(c)
  {
  //list files
case 1:
  { 
   strcpy(comm,"ls -a");
   system(comm);
   break;
   }
   
case 2:
  {
  
  
  
  while(1){
   strcpy(comm,"chmod ");
  printf("1-anyone can do anything (read, write, or execute) \n2-you can do anything; others can only read and execute \n3-you can do anything; others can only execute. \n4-you can read and write; others can only read\n5-Exit \nEnter choise: ");
   int y; char x;
   scanf("%d",&y);
   if(y==5) break;
   else{
   x=getchar();
   switch (y)
   {
case 1:
   strcat(comm,"777 ");
   printf("Enter file name : \n");
   gets(f_name);
   //strcat(comm," ");
   strcat(comm,f_name);
   system(comm);
   break;
case 2:
   strcat(comm,"755 ");
   printf("Enter file name : \n");
   gets(f_name);
   //strcat(comm," ");
   strcat(comm,f_name);
   system(comm);
   break;
case 3:
   strcat(comm,"711 ");
   printf("Enter file name : \n");
   gets(f_name);
   //strcat(comm," ");
   strcat(comm,f_name);
   system(comm);
   break;   
case 4:
   strcat(comm,"644 ");
   printf("Enter file name : \n");
   gets(f_name);
   //strcat(comm," ");
   strcat(comm,f_name);
   system(comm);
   break;
case 5:
   break;

default : printf("Enter correct choise\n"); 

   }//end internal switch
   }
  }//end while
  break;
  }//end case 2
case 3:
 {
   strcpy(comm,"touch ");
   printf("Enter file/s name : \n");
   gets(f_name);
   strcat(comm,f_name);
   system(comm);
   break;
  
 } 
 
 
 case 4:
 {
  strcpy(comm,"mkdir ");
   printf("Enter director/s name : \n");
   gets(f_name);
   strcat(comm,f_name);
   system(comm);
   break;
  
 } 
 
 case 5:
 {
  strcpy(comm,"rm ");
   printf("Enter file/s name : \n");
   gets(f_name);
   strcat(comm,f_name);
   system(comm);
   break;
  
 } 
 
 case 6:
 {
  strcpy(comm,"rm -r ");
   printf("Enter director/s name : \n");
   gets(f_name);
   strcat(comm,f_name);
   system(comm);
   break;
  
 } 
 case 7:
 {
  strcpy(comm,"ln -s ");
   printf("Enter file's path : \n");
   gets(path);
   strcat(comm,path);
   strcat(comm," ");   
   printf("Enter director's path : \n");   
   gets(path);
   strcat(comm,path);
   system(comm);
   break;
  
 } 
 case 8:
 {
  strcpy(comm,"mv ");
   printf("Enter old file/director's name : \n");
   gets(f_name);
   strcat(comm,f_name);
   strcat(comm," ");  
   printf("Enter new file/director's name : \n");
   gets(f_name);
   strcat(comm,f_name);
   system(comm);
   break;
  
 } 
 
 case 9: exit(1);
 default : printf("Enter correct choise\n"); 
 }
 }
 }
return 0;
}
