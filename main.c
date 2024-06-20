// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define probability(desiredOutcomes, NO_EVENTS) ((float)(desiredOutcomes) / (NO_EVENTS))




/*float marks_sum;
float avgMarks(float std_marks[5]){
  float avg;
    for(int i = 0; i < 5; i++){
      marks_sum += std_marks[i];
     }
     avg = marks_sum / 5;

     return avg;

}
*/
int main () {

 int m = 1000;//numbwer of iteration
 int count_failures = 0;

  time_t t;

   /* Intializes random number generator */
  srand((unsigned) time(&t));

   /* Print 5 random numbers from 0 to 100 */
for(int i = 0; i < m; i++){//loop 1000 times
 float std_marks = 0;
 for(int j = 0; j < 5; j++){
 std_marks += rand() % 101;
 }
   // float result = avgMarks(std_marks);
   float avg = std_marks / 5;

    if(avg < 50){
    count_failures++;
 }
}

 printf("Number of average marks below 50 are:%d\n",count_failures);
 float probability = probability(count_failures , m);
 printf("The probablity of failling the subject: %f\n",probability);

    return 0;
}


