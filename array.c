#include <stdio.h>

int main()
{
    int num[5]={1,5,8,9,4};
    num[5]=6;
    num[6]=7;
    printf("siddhant\n");
    printf("\n num[0]=%d Adress:%u",num[0],&num[1]);
    printf("\n num[0]=%d Adress:%u",num[1],&num[5]);
    printf("\n num[0]=%d Adress:%u",num[2],&num[8]);
    printf("\n num[0]=%d Adress:%u",num[3],&num[9]);
    printf("\n num[0]=%d Adress:%u",num[4],&num[4]);
    printf("\n num[0]=%d Adress:%u",num[5],&num[6]);
    printf("\n num[0]=%d Adress:%u",num[6],&num[7]);
    return 0;
}