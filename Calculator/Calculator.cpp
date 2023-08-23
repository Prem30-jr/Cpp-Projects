#include<stdio.h>
int main()
{
    int num,a[10][10],b[10][10],c[10][10],d[10][10],n,m,i,j,f,g,h,k,choice,row,col;
    printf("\n\t\t\t\t----------Welcome to Coding World!----------\n\n");
    strt:
    s:
    printf("\nPress 1 for Calculator");
    printf("\nPress 2 for Matrix Calculator");
    printf("\nPress 3 for exit\n");
    printf("\nChoose any one : ");
    scanf("%d",&num);
    if(num==1)
    {
        printf("\nYou have selected Calculator\n");
        printf("\n\t\t\t\t---------- Welcome to Calculator ----------\n");
        
        printf("\nPress 1 for Addition");
        printf("\nPress 2 for Subtraction");
        printf("\nPress 3 for Multiplication");
        printf("\nPress 4 for Division");
        printf("\nChoose any one :");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            printf("\nYou have chosen Addition");
            printf("\nEnter any two values :");
            scanf("\n%d%d",&f,&g);
            h=f+g;
            printf("\nThe sum of %d and %d is :%d",f,g,h);
            printf("\nThank you...........\n\n");
            break;
            case 2:
            printf("\nYou have chosen Subtraction");
            printf("\nEnter any two values :");
            scanf("\n%d%d",&f,&g);
            h=f-g;
            printf("\nThe Difference of %d and %d is :%d",f,g,h);
            printf("\nThank you...........\n\n");
            break;
            case 3:
            printf("\nYou have chosen Multiplication");
            printf("\nEnter any two values :");
            scanf("\n%d%d",&f,&g);
            h=f*g;
            printf("\nThe Multiply of %d and %d is :%d",f,g,h);
            printf("\nThank you...........\n\n");
            break;
            case 4:
            printf("\nYou have chosen Division");
            printf("\nEnter any two values :");
            scanf("\n%d%d",&f,&g);
            h=f/g;
            printf("\nThe Divide of %d and %d is :%d",f,g,h);
            printf("\nThank you...........\n\n");
            break;
            default:
           	printf("\nInvalid choice....... Please try again\n\n");
        }
        goto s;
        
    }
    if(num==2)
    {
        printf("\nYou have selected Matrix Calculator\n");
        printf("\n\t\t\t\t---------- Welcome to Matrix Calculator ----------\n\n");
        printf("\nPress 1 for Matrix Addition");
        printf("\nPress 2 for Matrix Subtraction");
        printf("\nPress 3 for Matrix Multiplication");
        printf("\nPress 4 for Matrix transpose");
        printf("\nPress any one :");
        scanf("\n%d",&choice);
        switch(choice)
        {
            case 1:
            printf("\nEnter the number of rows :");
            scanf("%d",&row);
            printf("\nEnter the number of Columns :");
            scanf("%d",&col);
            printf("\nEnter the value for First Matrix :\n");
            for(i=0;i<row;i++)
            {
                for(j=0;j<col;j++)
                {
                    scanf("%d",&a[i][j]);
                }
            }
            printf("\nEnter the value for Second Matrix :\n");
            for(i=0;i<row;i++)
            {
                for(j=0;j<col;j++)
                {
                    scanf("%d",&b[i][j]);
                }
            }
            for(i=0;i<row;i++)
            {
                for(j=0;j<col;j++)
                {
                    c[i][j]=a[i][j]+b[i][j];
                }
            }
            printf("\nThe sum of Two Matrices are :\n");
            for(i=0;i<row;i++)
            {
                for(j=0;j<col;j++)
                {
                    printf("%d\t",c[i][j]);
                }
                printf("\n");
            }
            printf("\nThank you...........\n\n");
            break;
            case 2:
            printf("\nEnter the number of rows :");
            scanf("%d",&row);
            printf("\nEnter the number of Columns :");
            scanf("%d",&col);
            printf("\nEnter the value for First Matrix :\n");
            for(i=0;i<row;i++)
            {
                for(j=0;j<col;j++)
                {
                    scanf("%d",&a[i][j]);
                }
            }
            printf("\nEnter the value for Second Matrix :\n");
            for(i=0;i<row;i++)
            {
                for(j=0;j<col;j++)
                {
                    scanf("%d",&b[i][j]);
                }
            }
            for(i=0;i<row;i++)
            {
                for(j=0;j<col;j++)
                {
                    c[i][j]=a[i][j]-b[i][j];
                }
            }
            printf("\nThe Difference of Two Matrices are :\n");
            for(i=0;i<row;i++)
            {
                for(j=0;j<col;j++)
                {
                    printf("%d\t",c[i][j]);
                }
                printf("\n");
            }
            printf("\nThank you...........\n\n");
            break;
            case 3:
            printf("\nEnter the number of rows :");
            scanf("%d",&row);
            printf("\nEnter the number of Columns :");
            scanf("%d",&col);
            printf("\nEnter the value for first matrix :\n");
            for(i=0;i<row;i++)
            {
                for(j=0;j<col;j++)
                {
                    scanf("%d",&a[i][j]);
                }
            }
            printf("\nEnter the value for second matrix :\n");
            for(i=0;i<row;i++)
            {
                for(j=0;j<col;j++)
                {
                    scanf("%d",&b[i][j]);
                }
            }
            for(i=0;i<row;i++)
            {
                for(j=0;j<col;j++)
                {
                    c[i][j]=0;
                    for(k=0;k<row;k++)
                    {
                        c[i][j]=c[i][j]+a[i][k]*b[k][j];
                    }
                }
            }
            printf("\nThe Product of two matrices is :\n");
            for(i=0;i<row;i++)
            {
                for(j=0;j<col;j++)
                {
                    printf("%d\t",c[i][j]);
                }
                printf("\n");
            }
            printf("\nThank you...........\n\n");
            break;
            case 4:
            printf("\nEnter the values of the Matrix :\n");
            for(m=0;m<2;m++)
            {
                for(n=0;n<2;n++)
                {
                    scanf("%d",&d[m][n]);
                }
            }
            printf("\nTranspose of matrix :\n");
            for(n=0;n<2;n++)
            {
                for(m=0;m<2;m++)
                {
                    printf("%d\t",d[m][n]);
                }
                printf("\n");
            }
            printf("\nThank you...........\n\n");
            break;
            default:
            	printf("\nInvalid choice....... Please try again");
        }
        goto strt;
    }
    if(num==3)
    {
    	end:
    	printf("\nYou have Exited....... Thank you!");
	}
}
