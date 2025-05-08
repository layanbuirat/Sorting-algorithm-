#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// leyan burait
//1211439
//#1

int main()
{
    // need int varaible l & temp ,
    // int n to limit the number of element in array then will initial size of array will change
     int l, temp, n;
     // ascending order sort or 2 for descending
     int sortType ;
     // type of input integer or characters
     int type ;
        printf("\nEnter the elements number will store it in array :");
        scanf("%d", &n);
        int arrayint[n];
        char arraychar[n];

        printf("\nEnter 1 for integer input or 2 for character input: ");
         scanf("%d", &type);
        if (type== 1 ){

       // printf("\nEnter elements :\n");
       // random data
       printf("\nGenerating random integer elements...\n");
            srand(time(0)); // Initialize random seed

            for (l = 0; l < n; l++)
                arrayint[l] = rand() % 100;

            printf("\nGenerated integer elements: ");
        for (l = 0; l < n; l++){
            printf("%d\t", arrayint[l]);
}
//  user if choose 1 ascending order sort or 2 for descending order sort
            printf("\nEnter 1 for ascending order sort or 2 for descending order sort: ");
            scanf("%d", &sortType);
            if (sortType ==1 ){
        l = 0;
        while (l < n)
        {
            if (l == 0 || arrayint[l - 1] <= arrayint[l])
                l++;
            else
            {
                temp = arrayint[l-1];
                arrayint[l - 1] = arrayint[l];
                arrayint[l] = temp;
                l = l- 1;
            }
        }
            }

            // 2 descending
             else if (sortType ==2 ){
        l = 0;
        while (l < n)
        {
            if (l == 0 || arrayint[l - 1] >= arrayint[l])
                l++;
            else
            {
                temp = arrayint[l-1];
                arrayint[l - 1] = arrayint[l];
                arrayint[l] = temp;
                l = l - 1;
            }
        }
            }

            else {
    printf("\nInvalid sort type entered.");
    return 0;
}



        for (l = 0;l < n;l++){
            printf("%d\t", arrayint[l]);

    }
        }

        else if (type == 2){
         // printf("\nEnter the character elements :\n");
         printf("\nGenerating random character elements...\n");
            srand(time(0)); // Initialize random seed

            for (l = 0; l < n; l++)
                arraychar[l] = 'A' + rand() % 26;

            printf("\nGenerated character elements: ");
           for (l = 0; l < n; l++)
            printf("%c\t", arraychar[l]);
//  user if choose 1 ascending order sort or 2 for descending order sort
            printf("\nEnter 1 for ascending order sort or 2 for descending order sort: ");
            scanf("%d", &sortType);
            if (sortType ==1 ){
        l = 0;
        while (l < n)
        {
            if (l == 0 || arraychar[l - 1] <= arraychar[l])
                l++;
            else
            {
                temp = arraychar[l-1];
                arraychar[l - 1] = arraychar[l];
                arraychar[l] = temp;
                l = l- 1;
            }
        }
            }

            // 2 descending
             else if (sortType ==2 ){
        l = 0;
        while (l < n)
        {
            if (l == 0 || arraychar[l - 1] >= arraychar[l])
                l++;
            else
            {
                temp = arraychar[l-1];
                arraychar[l - 1] = arraychar[l];
                arraychar[l] = temp;
                l = l - 1;
            }
        }
            }

            else {
    printf("\nInvalid sort type entered.");
    return 0;
}



        for (l = 0;l < n;l++){
            printf("%c\t", arraychar[l]);

    }
}




    return 0;
}
