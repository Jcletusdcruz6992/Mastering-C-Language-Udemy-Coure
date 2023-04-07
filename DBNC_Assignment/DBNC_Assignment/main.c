/*
*Author:
James Cletus Dcruz
*Description:
C program that takes N and M as sides of a rectangle
*and use it to find the square that can be made out of it
*
*/

#include<stdio.h>
#include<stdlib.h>
int array[50];    //Initializing array of size 50
int c=0;          //Defining a counter that acts as index of the array
int SquareSide(int *a,int *b);   //function declaration

int main()
{
    int M=0;   //Initializing M
    int N=0;   //Initializing N

    printf("Enter M \n");
    scanf("%d",&M);     //User inputs M value
    printf("Enter N \n");
    scanf("%d",&N);     //User inputs N value
    SquareSide(&M,&N);
    printf("Input: M=%d, N=%d \n",M,N);
    printf("Output :");
//Defining for loop to print the output from the array
    for(int j=0; j<c; j++)
    {
        printf("%dx%d ",array[j],array[j]);
        if (j<c-1)
        {
            printf(",");
        }
    }

}

//Recursive function that stores the side of square in the array
int SquareSide(int *a,int *b)
{

    int m=*a;
    int n=*b;
    if(m<n )
    {
        array[c]=m;                               // m is fetched to array as a square can be made with m value
        c=c+1;                                    //Here m<n ,where a square can be made with m as m is less than n
        n=n-m;                                    //After square is made with m ,the remaining side available for side n is calculated
        return SquareSide(&m,&n);                       // Recursively calling the function again with m and n with the new side length
    }

    else if(m>n )
    {

        array[c]=n;
        c=c+1;                                // this one follows the same algorithm except here side m>n
        m=m-n;
        n=n;
        return SquareSide(&m,&n);
    }

    else
    {

        array[c]=m;
        c=c+1;                              //this is used when both sides becomes equal after making most of the possible squares
        return 0;                           // Here the function excits successfully fetching all the possible sides of square in the array
    }


}

