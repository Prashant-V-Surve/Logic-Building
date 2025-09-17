///////////////////////////////////////////////////////
//
//  File name :     program4.c
//  Descreption :   Used to calculate percentage
//  Author :        Prashant V. Surve
//  Date :          28/04/2025
//
///////////////////////////////////////////////////////


# include <stdio.h>

int main()
{
    int Total  = 0;
    int Obtained = 0;
    float Percentage = 0.0f;

    printf("\n Enter your Total marks : ");
    scanf("%d",&Total);

    printf("\n Enter your Obtained marks : ");
    scanf("%d",&Obtained);

    Percentage = ((float)Obtained / (float)Total) * 100;

    printf("\n Percentage is : %.2f%%\n",Percentage);

    return 0;  

}


///////////////// OR //////////////////////////

/*

# include <stdio.h>

int main()
{
    int Total  = 0;
    int Obtained = 0;
    float Percentage = 0.0f;

    printf(" Enter your Total marks : ");
    scanf("%d",&Total);
    printf("\n");

    printf(" Enter your Obtained marks : ");
    scanf("%d",&Obtained);
    printf("\n");

    Percentage = ((float)Obtained / (float)Total) * 100;

    printf("Percentage is : %.2f%%\n",Percentage);

    return 0;  

}

*/     


/*



*/