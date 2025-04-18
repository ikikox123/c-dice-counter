//
//  main.c
//  C Dice Counter
//
//  Created by 高郁芳 on 2025/4/18.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, const char * argv[])
{
    int count[6]={0};
    int i,die1;
    srand((unsigned)time(NULL));
    for (i=0; i<10; i++) {
        die1=rand()%6;
        count[die1]++;
    }
    printf("Rolling a die 10 times:\n");
    for (i=0; i<6; i++) {
        printf("%d appears %d times\n",i+1,count[i]);
    }
}
