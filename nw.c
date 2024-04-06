#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
int a[30], i,j,m,n, choice, pos,ele;
void insert()                                                                       
//inserting at a given position
    {
     clrscr();
     printf("Enter the size of the array\n");
     scarf("%d",&n);
     printf("\nEnter the array on elements \n");
	   for(i=0;i<n;i++)
	    {                                                                       //inserting an array of elements
	      scanf("%d",&a[i]);
	     }
     printf("\nEnter the postion and element to insert\n");
     scanf("%d%d",&pos,&ele);                                       //inserting the position and element to insert
	   if (pos<=0 || pos>=n+1)                                 //checking if the position entered is present
	    {
	     printf("position invalid");
	    }
	  else
	    {
	     for(i=n-1;i>=pos-1;i--)
		{                                                      //inserting an element at the given position
		 a[i+1]=a[i];
		}
	     a[pos-1]=ele;
	     n++;
	    }
     printf("\nThe array elements are\n");
       for(i=0;i<n;i++)                                                  //displaying the array
	  {
	    printf("%d\t",a[i]);
	  }
       }
     //inserting at the beginning
     void insertbeg()
     {
     clrscr();
     printf("Enter the size of the array\n");
     scanf("%d",&n);
     printf("\nEnter the array on elements \n");
	   for(i=0;i<n;i++)
	    {
	      scanf("%d",&a[i]);                                  //inserting the array elements
	     }
     printf("\nEnter the and element to insert\n");
     scanf("%d",&ele);                                               //inserting the element to insert in beginning of the array
	     for(i=n-1;i>=0;i--)
		{
		 a[i+1]=a[i];                                     //inserting the the element to the array
		}
	     a[0]=ele;
	     n++;
     printf("\nThe array elements are\n");
       for(i=0;i<n;i++)
	  {                                                              //displaying the inserted array
	    printf("%d\t",a[i]);
	  }
       }
  //inserting at the end
     void insertend()
     {
     clrscr();
     printf("Enter the size of the array\n");              //size of the array
     scanf("%d",&n);
     printf("\nEnter the array on elements \n");
	   for(i=0;i<n;i++)
	    {                                                           //elements of the array
	      scanf("%d",&a[i]);
	     }
     printf("\nEnter the and element to insert\n");
     scanf("%d",&ele);                                            //element to insert
	     a[n]=ele;
	     n++;                                                   //inserting the element
     printf("\nThe array elements are\n");
       for(i=0;i<n;i++)
	  {                                                               //displaying the inserted array
	    printf("%d\t",a[i]);
	  }
       }
       //delet at a given position
void delet()
    {
     clrscr();
     printf("Enter the size of the array\n");
     scanf("%d",&n);                                                 //size of the array
     printf("\nEnter the array on elements \n");
	   for(i=0;i<n;i++)
	    {                                                              //elements of the array
	      scanf("%d",&a[i]);
	     }
     printf("\nEnter the postion to delete\n");
     scanf("%d",&pos);                                             //posstion to delete
	  if(pos<=0 || pos>n-1)
	  {
	      printf("Position invalid");                   //if the position entered is valid
	      }
	  else
	    {
	     for(i=pos-1;i<=n-1;i++)
		{
		 a[i]=a[i+1];                                 //deleting the postion
		}
	     n--;
	    }			                        //end of else
     printf("\nThe array elements are\n");
       for(i=0;i<n;i++)
	  {
	    printf("%d\t",a[i]);                          //displaying the array
	  }
       }
      //delet at the beginning
       void deletbeg()
•	{
     clrscr();
     printf("Enter the size of the array\n");
     scanf("%d",&n);                                    //size of the array
     printf("\nEnter the array on elements \n");
	   for(i=0;i<n;i++)
	    {
	      scanf("%d",&a[i]);                //elements of the array
	     }                                              //end of for
	     for(i=0;i<n;i++)
		{
		 a[i]=a[i+1];                    //deleting position at the beginning at array
		}
	     n--;
     printf("\nThe array elements are\n");
       for(i=0;i<n;i++)
	  {                                                 //displaying the deleted array
	    printf("%d\t",a[i]);
	  }
       }
       //deleting  at the end
	  void deletend()
    {
     clrscr();
     printf("Enter the size of the array\n");             //size of the array
     scanf("%d",&n);
     printf("\nEnter the array on elements \n");
	   for(i=0;i<n;i++)
	    {                                                          //elements of the array
	      scanf("%d",&a[i]);
	     }
	     for(i=n;i<n-1;i++)
		{                                                 //deleting at the end of the array
		 a[i]=a[i+1];
		}
	     n--;
     printf("\nThe array elements are\n");
       for(i=0;i<n;i++)
	  { 
	    printf("%d\t",a[i]);                             //displaying the deleting array
	  }
       }



       //main function
	    void main()
	       {                                                      //menu loop
		  while(1)
		      {
		       clrscr();
			 printf("\n Welcome to menu-driven program\n");
			 printf("\n choose your option\n");
			 printf("\n 1.Insert at a given postion");
			 printf("\n 2.Insert in the beginning");
			 printf("\n 3.Insert in the end ");
			 printf("\n 4.Delete at a given position");
			 printf("\n 5.Delete in the beginning");
			 printf("\n 6.Delete in the end");
			 printf("\n 7.Exit\n");
			 printf("\n\n Enter the choice from 1 to 7:");
			  scanf("%d",&choice);
			  switch(choice)
			      {                                                    //switch statement
				 case 1 : insert();
					  break;                    //inserting at a given position
				 case 2 : insertbeg();
					  break;                    //inserting at the beginning
				 case 3 : insertend();
					  break;                    //inserting  at the end
				 case 4 : delet();
					  break;                    //deleting at a given position
				 case 5 : deletbeg();
					  break;                    //deleting at the beginning
				 case 6 : deletend();
					  break;                    //deleting at the end
				 case 7 : printf("\n Thank you for using the program.");
					  getch();                  //to exit the menu
					  exit(0);
				default : printf("\n Invalid input");           //invalid input
					  getch();
			      }
			      printf("\nPress enter to view the menu or exit");
			      getch();                                                         // to go back to the menu
			  }
			  getch();          //end the program
		       }
