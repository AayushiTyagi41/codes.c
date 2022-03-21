#include <stdio.h>
#include <string.h>
struct student{
   int id;
   char name[30];
   float percentage;
};
int main(){
   int i;
   struct student record[2];
   record[0].id=1;
   strcpy(record[0].name, "om");
   record[0].percentage = 81.5;
   record[1].id=2;
   strcpy(record[1].name, "rahul");
   record[1].percentage = 94.5;
   record[2].id=3;
   strcpy(record[2].name, "Harry");
   record[2].percentage = 89.5;
   for(i=0; i<3; i++){
      printf(" Records of STUDENT : %d \n", i+1);
      printf(" Id is: %d \n", record[i].id);
      printf(" Name is: %s \n", record[i].name);
      printf(" Percentage is: %f\n\n",record[i].percentage);
   }
   return 0;
}