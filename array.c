/*#include<stdio.h>// printing the memory address

int main()
{
int a[] = {11,12,13,14,15};
for (int i=0; i<5; i++)
{
printf("\nAddress of %d is a[%d] : %d",a[i],i,&a[i]);
}
return 0;
}*/



// printing the element in array
/*#include<stdio.h>
int main(){int a[5];
for( int i=0;i<5;i++){
    scanf("%d",&a[i]);
}
for (int j=4;j>=0;j--){
    printf("\n%d",a[j]);
}
}*/


/*#include<stdio.h>
int main()
{
int a[5] = {3, 6, 9, 2, 5}, n = 5;
int b[n], i;
// copying elements from one
//array to another
for (i = 0; i < n; i++)
{
b[i] = a[i];
}
printf("The first array is :");
for (i = 0; i < n; i++)
{
printf("%d ", a[i]);
}
printf("\nThe second array is :");
for (i = 0; i < n; i++)
{
printf("%d ", b[i]);
}
return 0;
}
//fibd the smallest number in aaray
#include<stdio.h>
int main(){
    int a[5] = {20,30,45,56,90};
    int max = a[0];
    for(int i = 0;i<=)
}*/

/*#include <stdio.h>
int main()
{
int a[30], i, num, smallest;
printf("\nEnter no of elements :");
scanf("%d", &num);
// Read n elements in an array
for (i = 0; i < num; i++)
scanf("%d", &a[i]);
// Consider first element as smallest
smallest = a[0];
for (i = 0; i < num; i++)
{
if (a[i] < smallest)
{
smallest = a[i];
}
}
printf("\nSmallest Element : %d", smallest);
}*/

// to print  the memory of the address
/*#include<stdio.h>
int main(){
    int arr[5] = {2,3,4,5,6};
    for(int i = 0;i<=4;i++){
    printf("%d",&arr[i]);}
    }*/
// to print thr greatest element in array
/*#include<stdio.h>
int main(){
    int arr[6] = {0,5,6,7,8,9};
    int max = arr[0];
    for(int i = 0;i<=6;i++){
        if(arr[i]>max){
        max = arr[i];}}
        printf("%d",max);
    
}*/
// copyig elemnts from one to another
/*#include<stdio.h>
int main(){
    int arr[5] = {1,2,3,4,5}, n  = 5;

    int b[n],i;
   // copying all elements into another
   for(i = 0;i<=n;i++){
    b[i] = a[i];
   } 
   printf("the first array is:");
   for(i = 0;i<n;i++){
    printf("%d",a[i]);
   }
   printf("the second array is:");
   for(i = 0;i<n;i++){
    printf("%d",b[i]);
   }

}*/
// printing by taking input from usser
/*#include<stdio.h>
int main(){int n;
    printf("enter the size of the array");
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<=n-1;i++){
    scanf("%d",&arr[i]);}
    for(int i=0;i<=n-1;i++){
    printf(" %d ",arr[i]);}
}*/
// printing the product of the element
/*#include<stdio.h>
int main(){int prod=1;
int arr[5]={1,2,3,4,0};
for(int i=0;i<=5;i++){
    prod=prod*arr[i];
}
printf("%d",prod);
}*/
// given a array multiply the odd indexed element by 2 and add 10 on even indexed element print array
/*#include<stdio.h>
int main(){
    int arr[4]={2,3,4,5};
    for(int i=0;i<=4;i++){
        if(i%2!=0)
        arr[i]= arr[i]*2;
        else arr[i]=arr[i]+10;
    }
    for(int i=0;i<=4;i++){
    printf("%d",arr[i]);}
}*/
// count the number which is greater then x
/*#include<stdio.h>
int main(){int x = 0,count=0;
    int arr[5]={2,3,4,5,6};
    for(int i=0;i<=5;i++){
        if(arr[i]>x);
        count++;}

   
    printf("%d",count);
}*/
// find the second largest number in array
// reverse the array 
/*#include<stdio.h>
int main(){
    int arr[5]={2,3,4,5,6};
    for(int i=5;i>=0;i--){
       printf("%d ",arr[i]);}}*/
// check the number is palindrome and not taking the input from user
/*#include<stdio.h>
int main(){int n,rev=0;
    printf("enter the number");
    scanf("%d",&n);
    while(n>0){
      rev=(rev*10)+n%10;
      n=n/10;}
    printf("%d",rev);
}*/
// rotate the array by k steps where k is non negative integers k can be greater the
//arr=[1,2,3,4,5] k=2 arr=[5,4,1,2,3]
/*#include<stdio.h>
int main(){
    int arr[5];
}*/
// given the array containing the elements from 1 to 100 except one element is missing in 
// the range find the missing element
/*#include<stdio.h>
int main(){
    int arr[5]={12,21,34,21,67};
    int x=21;
    for(int i=0;i<=4;i++){
        if(arr[i]==x){
            printf("%d is present in the array is %d\n",x,i);
        }
    }
    
}*/
// same question from different logic
/*#include<stdio.h>
int main(){
    int arr[5]={21,21,34,45,67};
    int x=21;
    for(int i=5;i>=0;i--){
        if (arr[i]==x){
            printf("%d is present in the array is %d\n",x,i);
    
} 
  } 
  }*/
// nested loop
/*#include<stdio.h.>
int main(){
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",arr[i][j]);
        
        }
        printf("\n");
    }

}*/
//taking input from user in nested loop
/*#include<stdio.h>
int main(){
    int arr[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d ",&arr[i][j]);
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",arr[i][j]);
        }
    printf("\n");
    }

}*/
/*#include<stdio.h>
int main(){int r,c;
    printf("enter the number of row");
    scanf("%d",&r);
    printf("enter the number of column");
    scanf("%d",&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d ",&arr[i][j]);
        }
    }
    
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",arr[i][j]);
        }
    
    printf("\n");}
    
}*/
//wap of the 2d matrix to store 10 in every column aand row
/*#include<stdio.h>
int main(){
    int arr[5][5]={{10,10,10,10,10},{10,10,10,10,10},{10,10,10,10,10

    },{10,10,10,10,10},{10,10,10,10,10}};
    for(int i=0;i<=4;i++){
        for(int j=0;j<=4;j++)
        printf("%d ",arr[i][j]);
    
    printf("\n");
}  }*/
// wap to store the number of the students and their marks
#include<stdio.h>
int main(){int r;
    printf("enter the number of the row");
    scanf("%d",&r);
    int arr[r][2];
    for(int i=0;i<r;i++){
        scanf("%d",r);
        for(int j=0;j<2;j++)
    }
}