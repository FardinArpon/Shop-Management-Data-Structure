#include<stdio.h>
int main()
{
    system("COLOR B0");
    int u1=1234,p1=5678,u2,p2;
    printf("Enter User name :");
    scanf("%d",&u2);
    printf("\nEnter Password :");
    scanf("%d",&p2);
    if(u1==u2&&p1==p2)
    {
        system("cls");
        printf("###########################\n");
        printf("##\t\t\t ##\n");
        printf("##\t\t\t ##\n");
        printf("##   Welcome to My Shop  ##\n");
        printf("##\t\t\t ##\n");
        printf("##\t\t\t ##\n");
        printf("###########################\n");
        getch();
        system("cls");
        {

            printf("1.Mobile\n2.Laptop\n3.About shop");
            printf("\nEnter your choice\n");
            int cho;
            scanf("%d",&cho);
            if(cho==1)
            {
                system("cls");
                int size,arr[100],i;
                printf("How Much Keep Mobiles? ");
                scanf("%d",&size);
                printf("Do the submit Mobile model:\n");
                for (i=0; i<size; i++)
                {
                    scanf("%d",&arr[i]);
                }
                while (1)
                {
                    int op;
                    printf("Do the new Mobile information Insert-->1\n");
                    printf("Do the old Mobile information Delete-->2\n");
                    printf("Do Arrange the Mobiles-->3\n");
                    printf("Fine any Mobile-->4\n");
                    printf("Enter your choice\n");
                    scanf("%d",&op);

                    if(op==1)
                    {
                        printf("Where do you insert the position:\n");
                        int p;
                        scanf("%d",&p);
                        printf("Give new Mobile model:\n");
                        int nv;
                        scanf("%d",&nv);
                        size = size+1;
                        for (i=size-1; i>=0; i--)
                        {
                            if (i==p)
                            {
                                arr[i]=nv;
                                break;
                            }
                            else
                            {
                                arr[i]=arr[i-1];

                            }
                        }
                    }
                    else if(op==2)
                    {
                        printf("Delete Mobile model?:\n");
                        int p;
                        scanf("%d",&p);
                        size = size-1;
                        for (i=p; i<size; i++)
                        {

                            arr[i]=arr[i+1];

                        }
                        printf("Delete Success\n");
                    }
                    else if (op==3)
                    {
                        int i,j,temp;

                        for(i=0; i<size; i++)
                        {
                            for(j=0; j<size; j++)
                                if(arr[j]>arr[j+1])
                                {
                                    temp=arr[j];
                                    arr[j]=arr[j+1];
                                    arr[j+1]=temp;
                                }
                        }
                        printf("Done The Mobile decorate:\n");
                    }
                    else if (op==4)
                        {
                        int num,flag=0;


                        printf("kon mobile model khujben?\n");
                        scanf("%d",&num);
                        for(i=0; i<size; i++)
                        {
                            if(arr[i]==num)
                            {
                                printf("mobile model khuje paici\n%d\n",num);
                                flag=1;

                            }
                        }
                        if(flag==0)
                        {
                            printf("ki number disen vai khuje paina!");
                        }
                    }

                    for (i=0; i<size; i++)
                    {
                        printf("%d ",arr[i]);
                    }
                    printf ("\n");

                }

            }

            else if(cho==2)
            {
                system("cls");
                int size,arr[100],i;
                printf("How Much Keep Laptops? ");
                scanf("%d",&size);
                printf("Do the submit Laptop model:\n");
                for (i=0; i<size; i++)
                {
                    scanf("%d",&arr[i]);
                }
                while (1)
                {
                    int op;
                    printf("Do the new Laptop information Insert.-->1\n");
                    printf("Do the old Laptop information Delete.-->2\n");
                    printf("Do Arrange the Laptops.-->3\n");
                    printf("Fine any Laptop-->4\n");
                    printf("Enter your choice\n");
                    scanf("%d",&op);

                    if(op==1)
                    {
                        printf("Where do you insert the position:\n");
                        int p;
                        scanf("%d",&p);
                        printf("Give new Laptop model:\n");
                        int nv;
                        scanf("%d",&nv);
                        size = size+1;
                        for (i=size-1; i>=0; i--)
                        {
                            if (i==p)
                            {
                                arr[i]=nv;
                                break;
                            }
                            else
                            {
                                arr[i]=arr[i-1];

                            }
                        }
                    }
                    else if(op==2)
                    {
                        printf("Where do  the Laptop delete?:\n");
                        int p;
                        scanf("%d",&p);
                        size = size-1;
                        for (i=p; i<size; i++)
                        {

                            arr[i]=arr[i+1];

                        }
                        printf("Successful\n");
                    }
                    else if(op==3)
                    {
                        int i,j,temp;

                        for(i=0; i<size; i++)
                        {
                            for(j=0; j<size; j++)
                                if(arr[j]>arr[j+1])
                                {
                                    temp=arr[j];
                                    arr[j]=arr[j+1];
                                    arr[j+1]=temp;
                                }
                        }
                        printf("Done the Laptop decorate:\n");
                    }
                      else if (op==4)
                        {
                        int num,flag=0;


                        printf("kon Laptop khujben?\n");
                        scanf("%d",&num);
                        for(i=0; i<size; i++)
                        {
                            if(arr[i]==num)
                            {
                                printf("Laptop model khuje paici\n%d\n",num);
                                flag=1;

                            }
                        }
                        if(flag==0)
                        {
                            printf("ki number disen vai khuje paina!");
                        }
                    }
                    for (i=0; i<size; i++)
                    {
                        printf("%d ",arr[i]);
                    }
                    printf ("\n");

                }
            }
            else if (cho==3)

            {
                system("cls");
                printf("This shop name is Star.\n");
                printf("Our shop have a laptop, mobile etc.\n");
                printf("Please oder any product.");
                getch();
            }
        }
    }
    else
    {
        printf("Wrong User and Password\nTry Again");
    }

    return 0;
}

