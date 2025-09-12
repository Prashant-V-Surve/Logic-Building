///////////////////////////////////////////////////////
//     
//  File name :     program5.c
//  Descreption :   Used to calculate percentage
//  Author :        Prashant V. Surve
//  Date :          28/04/2025
//
///////////////////////////////////////////////////////


# include <stdio.h>

float CalculatePercentage(int iTotal, int iObtained)
{
    float fPercentageValue = 0.0f;
    fPercentageValue = ((float)iObtained / (float)iTotal) * 100;
    return fPercentageValue;
}


int main()
{
    int iTotal = 0;
    int iObtained = 0;
    float fPercentage = 0.0f;

    printf(" Enter your Total marks : ");
    scanf("%d",&iTotal);
    
    printf(" Enter your Obtained marks : ");
    scanf("%d",&iObtained);
    

    //Percentage = ((float)iObtained / (float)iTotal) * 100;
    fPercentage = CalculatePercentage(iTotal, iObtained);
    
    printf(" Percentage is : %.2f%%\n",fPercentage);

    return 0;  

}



///// HERE TAKE PRECAUTION THAT THE VARIABLE INSIDE THE FUNCTION CREATED AND THE MAIN FUNCTION SHOULD BE THE SAME
