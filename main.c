#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  
  // Get the user's full name
  char last_name[100], first_name[100];
  printf("Enter your first name: ");
  scanf("%s",&first_name);
  printf("Enter your last name: ");
  scanf("%s",&last_name);


  // Get the min and max
  int min, max;
  printf("Enter the min to draw : ");
  scanf("%d", &min);
  printf("Enter the max to draw  :");
  scanf("%d", &max);

  // Initialization of the rand() function
  srand(time(NULL));

  // Draw the lot
  int draw = rand() % (max - min + 1) + min;

  // Show result
  printf("%s %s, the number drawn at random is : %d\n",first_name, last_name, draw);

  // Ask the user if he wants to draw a lot again
  char response;
  printf("Would you like to draw again? (y/n) ");
  scanf(" %c", &response);

  // If the user's response is 'y' , we start again
  if (response == 'y') {
    main();
  }

  return 0;
}
