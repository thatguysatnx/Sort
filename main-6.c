#include <stdio.h>
#include <stdbool.h>
void swap (int *xp,int *yp)
{
 int t = *xp;
 *xp = *yp;
 *yp = t;
}

void selection (int *a,int size)
{
 int i,j;
 for (i=0;i<size;i++){
  for (j=i+1;j<size;j++){
   if (a[i]>a[j]){
    swap(&a[i],&a[j]);
   }
  }
 }
}

void insert (int *a,int size)
{
 int i,j,key;
 for (i=0;i<size;i++){
  key = a[i];
  j=i-1;
  while (j>=0&&a[j]>key){
   a[j+1] = a[j];
   j=j-1;
  }
  a[j+1] = key;
 }
}

void bubble (int *a,int size)
{
 int i,j;
 bool swapped;
 
 for (i=0;i<size;i++){
  swapped = false;
  for (j=0;j<size-i-1;j++){
   if (a[j]>a[j+1]){
    swap(&a[j],&a[j+1]);
    swapped = true;
   }
  }
  if (swapped==false){
   break;
  }
 }
}

void print (int *a,int size)
{
 for (int i=0;i<size;i++){
  printf ("%d\t",a[i]);
 }
}



int main ()
{
 int a[]={10,9,8,100,67,8790,-9};
 int size = sizeof(a)/sizeof(a[0]);
 bubble(a,size);
 print(a,size);
 
}