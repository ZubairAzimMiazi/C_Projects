#include<stdio.h>
int initials()
{
    char name[100],address[300],email[100];
    int phone;
    printf("Enter your Name :");
    scanf("%s",name);
    printf("Enter your address : ");
    scanf("%s",address);
    printf("Enter your E-mail id : ");
    scanf("%s",email);
    printf("Enter your Phone NO. : ");
    scanf("%d",&phone);
    printf("** Thanks your reservation has been confirmed **\n");
}
int ac()
{
    int total,choice,price=240;
     printf("enter the total number of sit you want to reserve : ");
    scanf("%d",&total);
    price=price*total;
    printf("Your total price of Ticket is %d \n",price);
    printf("If you want to proceed Please then press '1' otherwise press '0' :");
    scanf("%d",&choice);
    if(choice==1)
    {
         initials();
    }
    else if (choice==0)
    {
         process();
    }
    else
    {
        printf("You have entered wrong keyword please re-enter your choices from first menu");
        process();
    }

}
int nonac()
{
    int total,choice,price=240;
     printf("enter the total number of sit you want to reserve : ");
    scanf("%d",&total);
    price=price*total;
    printf("Your total price of Ticket is %d \n",price);
    printf("If you want to proceed Please then press '1' otherwise press '0' :");
    scanf("%d",&choice);
    if(choice==1)
    {
        initials();
    }
    else if (choice==0)
    {
        process();
    }
    else
    {
        printf("You have entered wrong keyword please re-enter your choices from first menu");
        process();
    }
}
int process()
{
     int s;
 while(1)
 {
     printf("1.AC Train\n2.Non-Ac Train\n3.Exit\nEnter your choice(enter the serial no.) : ");
     scanf("%d",&s);
     switch(s)
     {
     case 1 :
        return ac();
     case 2 :
        return nonac();
     case 3 :
        return 0;
     default :
        printf("You have entered a wrong key ,Try again!");
     }
}
}
int main()
{
     printf("welcome to online ticket reservation system\n");
    while(1)
    {
    process();
    }
}
