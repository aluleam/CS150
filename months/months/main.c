


#include <stdio.h>
#include <string.h>

int main(void) {
   char inputMonth[50];
   int inputDay;
  scanf("%s", inputMonth);
  scanf("%d",&inputDay);

if ((inputMonth == "January" && inputDay >= 1 && inputDay <= 31) || (inputMonth == "February" && inputDay >= 1 && inputDay <= 29) || (inputMonth == "March" && inputDay >= 1 && inputDay <= 19) || (inputDay == "December" && inputDay >= 21 && inputDay <= 30))

printf("Winter");

else if ((inputMonth == "April" && inputDay >= 1 && inputDay <= 30) || (inputMonth == "May" && inputDay >= 1 && inputDay <= 30) || (inputMonth == "March" && inputDay >= 20 && inputDay <= 31) || (inputMonth == "June" && inputDay >= 1 && inputDay <= 20))

printf("Spring");

else if ((inputMonth == "July" && inputDay >= 1 && inputDay <= 31) || (inputMonth == "August" && inputDay >= 1 && inputDay <= 31) || (inputMonth == "June" && inputDay >= 21 && inputDay <= 30) || (inputMonth == "September" && inputDay >= 1 && inputDay <= 21))

printf("Summer");

else if ((inputMonth == "October" && inputDay>= 1 && inputDay <= 31) || (inputMonth == "November" && inputDay >= 1 && inputDay <= 30) || (inputMonth == "September" && inputDay >= 22 && inputDay <= 30) || (inputMonth == "December" && inputDay >= 0 && inputDay <= 20))

printf("Autumn");

else

printf("Invalid");

  return 0;

}

   
   
   
  
