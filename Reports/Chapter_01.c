#include<stdio.h>
struct node
{
    int data;
    struct node *next;
};

main()
{
    int data1, data2;
    struct node *head, *ptr,*cu;
    char ch;

    head=(struct node*)malloc(sizeof(struct node));
   // head=NULL;
    head->next=NULL;
    ptr=(struct node*)malloc(sizeof(struct node));
    ptr=NULL;

    do
    {   printf("Enter element DATA:");
        scanf("%d",&data1);
        printf("HELLO");
        if(head->next == NULL)
        {
            ptr->data=data1;
            head=ptr;
            printf("HELLO1");
        }
        else
        {  ptr=NULL;
            ptr->data=data1;
            ptr=head->next;
            head->next=ptr;
                printf("HELLO2");
        }

        printf("\nDo you wanna enter more elements(y/n):");
                fflush(stdin);
        scanf("%c",&ch);

    }while(ch=='y');

    printf("\nLinked List:");
    cu=(struct node*)malloc(sizeof(struct node));
    cu=NULL;
    cu=head;

    while(cu->next != NULL)
    {
        printf(" %d",cu->data);
        cu=cu->next;
    }

}
