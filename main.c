//C program for bundles purchase
/* 
 * Name:Amani Munga Tunje
 * Reg:CT100/G/26225/25
 * Discription: Mobile Data Bunlde Purchase.
 * Option (1-4).
 * Bundles (100MB,500MB,1GB,2GB).
 * Cost(KES) -(50,200,350,600).
 * Display the obove.
 * Switch statement to display bundles selectedand its cost.
 * Display "Invalid choise"if user enter number outside 1-4.
 */
#include <stdio.h>

//main function
int main() {
    
    //Variable diclaration
    int choice;
    
    //Diplay Menu
    printf("1     100MB     @50KES\n");
    printf("2     500MB     @200KES\n");
    printf("3     1GB       @350KES\n");
    printf("4     2GB       @600KES\n");
    
    //prompt user to select data bundles.
    printf("Select your data bunlde (1-4)\t");
    scanf("%d",&choice);
    
    //Switch statement to display bundle selected and its cost.
    if(choice==1){
        printf("You have selected 100MB, Cost @50KES");
    }
    else if(choice==2){
        printf("You have selected 500MB, Cost @200KES");
    }
    else if(choice==3){
        printf("You have selected 1GB, Cost @350KES");
    }
    else if(choice ==4){
        printf("You hVe selected 2GB, Cost @600KES");
    }
    else{
        printf("Invalid choise");
    }
    
    return 0;
}