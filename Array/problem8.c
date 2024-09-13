//Write a program in C to count the frequency of each element of an array.

#include<stdio.h>
int main(){

    int i,j,n;
    int ctr=1;
    int fr[100];

    printf("number of elements in array 1: ");
    scanf("%d", &n);
    int arr1[n];

    for(i=0 ; i<n ; ++i){
        printf("Enter the elements: ");
        scanf("%d", &arr1[i]);
    }

    for(i=0; i<n; i++){
        ctr=1;
        for(j=i+1; j<n; j++){
            if(arr1[i]==arr1[j]){
                ctr++;
                fr[j]=0;
            }
        }
         if (fr[i] != 0)
        {
            fr[i] = ctr;
        }
    }
    printf("\nThe frequency of all elements of the array : \n");
    for (int i = 0; i < n; i++)
    {
        if (fr[i] != 0)
        {
            printf("%d occurs %d times\n", arr1[i], fr[i]);
        }
	}

    return 0;
}