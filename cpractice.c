#include <stdio.h>

struct HouseStruct {
    int bedRooms;
    int baths;
} myHouse;

//Write a C program to show the basic declaration of a pointer

int main()
{
   int m = 10, n, o;
   int *z = &m;
   
   printf("&z stores the address of z = %p\n", &z);
   printf("z stores the address m: %p\n", z);
   printf("*z stores the value of m: %i\n", *z);
   printf("\n");

   printf("&m is the address of m: %p\n", &m);
   printf("&n stores the address of n = %p\n", &n);
   printf("&o stores the address of o = %p\n", &o);
   printf("notice the address values are decreasing from m to o\n");
   printf("-------------------------------\n");

   struct HouseStruct *hP = &myHouse;
   hP -> bedRooms = 3;
   hP -> baths = 2;

   printf("There are %d Bed Rooms\n", hP->bedRooms);
   printf("There are %d Baths\n", hP->baths);


   printf("");




   return(0);
}

