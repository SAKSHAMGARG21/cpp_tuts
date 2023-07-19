// c
//  #include<stdio.h>
//  int main(int argc, char const *argv[])
//  {
//     int adhar[10];
//     int *ptr= &adhar[0];
//     for (int i=1;i<=10;i++){
//         printf("enter your adhar no:");
//         scanf("%d",(ptr+i));
//     }
//     for (int i=1;i<=10;i++){
//         printf("your adhar %d no is:%d\n",i,*(ptr+i));
//     }
//     return 0;
//}

// c
//  #include<stdio.h>
//  int main(int argc, char const *argv[])
//  {
//     int adhar[10];
//     int *ptr= &adhar[0];
//     for (int i=0;i<10;i++){
//         printf("enter your adhar no:");
//         scanf("%d",&adhar[i]);
//     }
//     for (int i=0;i<10;i++){
//         printf("your adhar %d no is:%d\n",i,adhar[i]);
//     }
//     return 0;
// }

// c
//  #include<stdio.h>
//  int parry(int arr[],int n);
//  int main(int argc, char const *argv[])
//  {
//      int arr[]={1,2,3,4,5,6};
//      parry(arr,6);
//      return 0;
//  }
// int parry(int arr[], int n){
//     for (int i=0;i<n;i++){
//         printf("%d \t",arr[i]);
//     }
//     return 0;
// }

// c
//  #include<stdio.h>
//  int arrfun(int *arr,int n);
//  int main(int argc, char const *argv[])
//  {
//      int arr[]={1,2,3,4,5,6,7};
//      arrfun(arr,7);
//      return 0;
//  }
//  int arrfun(int *arr,int n){
//      int i ,c=0;
//      for (i=0;i<n;i++){
//          if (arr[i]%2!=0){
//              c=c+1;
//          }
//      }
//      printf("odd no in ary:%d\n",c);
//  }

// c
//  #include<stdio.h>
//  void arrfun(int *arr,int n);
//  // int parry(int arr[],int n);
//  int main(int argc, char const *argv[])
//  {
//      int arr[]={1,2,3,4,5,6};
//      arrfun(arr,6);
//      // parry(arr,5);
//      return 0;
// }
// // int parry(int arr[],int n){
// //     for (int i=0;i<n;i++){
// //         printf("%d ",arr[i]);
// //     }
// // }
// void arrfun(int *arr,int n){ //*arr or arr[] can be written like this.
//     int i;
//     for (i=0;i<n/2;i++){
//         int f=arr[i];
//         int s=arr[n-i-1];
//         arr[n-i-1]=f;
//         arr[i]=s;
//     }
//     for (int i=0;i<n;i++){
//         printf("%d ",arr[i]);
//     }
// }

// c
//  #include<stdio.h>
//  int main(int argc, char const *argv[])
//  {
//      int n;
//      printf("enter the no value >2:");
//      scanf("%d",&n);

//     int fib[n];
//     fib[0]=0;
//     fib[1]=1;
//     printf("%d %d",fib[0],fib[1]);

//     for (int i=2;i<n;i++){

//         fib[i]=fib[i-1]+fib[i-2];

//         printf(" %d ",fib[i]);
//     }
//     return 0;
// }

// 2D Array
// c
// #include<stdio.h>
// int table(int arr[][10],int a ,int b);
// int main(int argc, char const *argv[])
// {
//     int arr[2][10];
//     table(arr,2,3);
//     for (int i=0;i<10;i++){
//         printf("%d ",arr[0][i]);
//     }
//     printf("\n");
//     for (int i=0;i<10;i++){
//         printf("%d ",arr[1][i]);
//     }
//     return 0;
// }
// int table(int arr[][10],int a ,int b){
//     int num=a;
//     for (int i=0;i<2;i++){
//         for (int j=0;j<10;j++){
//             arr[i][j]=num *(j+1);
//         }
//         num=b;
//         // printf("\n");
//     }
// }

// c
// #include <stdio.h>
// int main()
// {
//     int arr[] = {5, 2, 8, 6, 4};
//     for (int i = 0; i < 5; i++)
//     {
//         if (arr[i] < arr[0])
//         {
//             arr[0] = arr[i];
//         }
//     }
//     printf("%d\n", arr[0]);
//     return 0;
// }

// c
//  #include<stdio.h>
//  int main(int argc, char const *argv[])
//  {
//      // int n;
//      // printf("enter the no :n");
//      // scanf("%d",&n);
//      int arr[]={1,2,3,4,3,3,6,9,3};
//      int so=sizeof(arr)/sizeof(arr[0]);
//      int key=3;
//      int count=0;
//      for (int i=0;i<so;i++){
//          if (arr[i]==key){
//              count++;
//          }
//      }
//      printf("%d",count);
//      return 0;
//  }

// c
// frequency of elemets
//  #include<stdio.h>
//  int main(int argc, char const *argv[])
//  {
//      int c[1000],arr[]={1,2,6,7,6,1,8};
//      int s=sizeof(arr)/sizeof(arr[0]);
//      for (int i=0;i<s;i++){
//          int count=1;
//          if (arr[i]!=-1){
//              for (int j=i+1;j<s;j++){
//                  if (arr[i]==arr[j]){
//                      count++;
//                      arr[j]=-1;
//                  }
//             }
//         }
//         c[i]=count;
//     }
//     for (int i=0;i<s;i++){
//         if(arr[i]!=-1){
//             printf("%d=%d\n",arr[i],c[i]);
//         }
//     }
//     return 0;
// }

// c
//  #include<stdio.h>
//  int main(int argc, char const *argv[])
//  {
//      int n;
//      int arr[]={1,2,3,4,5};
//      int s=sizeof(arr)/sizeof(arr[0]);
//      printf("enter the no you want to insert:");
//      scanf("%d",&n);
//      arr[s]=n;
//      // printf("%d ",arr);
//      // int s=sizeof(arr)/sizeof(arr[0]);
//      for (int i=0;i<s+1;i++){
//          printf("arr[%d]=%d\n",i,arr[i]);
//      }
//      return 0;
//  }

// c
//  #include <stdio.h>
//  #include <string.h>
//  #include <math.h>
//  #include <stdlib.h>

// int main() {
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     int sum=0;
//     for (int j=0;j<n;j++){
//         printf("%d",arr[j]);
//         sum=sum+arr[j];
//     }
//     printf("%d",sum);
//     return 0;
// }

// c
//  reverse array
//  #include <stdio.h>
//  #include <stdlib.h>

// int main()
// {
//     int num,i;
//     scanf("%d", &num);
//     int arr[num];
//     for(i = 0; i < num; i++) {
//         scanf("%d", &arr[i]);
//     }
//     /* Write the logic to reverse the array. */
//     for (int j=0;j<num/2;j++){
//         int fst=arr[j];
//         int sec=arr[num-1-j];
//         arr[num-1-j]=fst;
//         arr[j]=sec;
//     }
//     for(i = 0; i < num; i++){
//         printf("%d ", arr[i]);
//     }
//     return 0;
// }

// c
//  coding ninja question
//  #include<stdio.h>
//  int main(int argc, char const *argv[])
//  {
//      int n,arr[]={1,2,3,4,5,6};
//      printf("enter the nO:");
//      scanf("%d",&n);
//      int s=sizeof(arr)/sizeof(arr[0]);
//      for(int i=0;i<s;i++){
//          if (arr[i]==n){
//              for (int j=i+1;j<s;j++){
//                  printf("%d ",arr[j]);
//              }
//              for (int j=0;j<i+1;j++){
//                  printf("%d ",arr[j]);
//              }
//          }
//      }
//      return 0;
//  }

// c
//  #include<stdio.h>
//  int main(int argc, char const *argv[])
//  {
//      int i,n,arr[]={1,0,3,0,0,1,0};
//      int s=sizeof(arr)/sizeof(arr[0]);
//      int k=0;
//      for (i=0;i<s;i++){
//          if (arr[i]!=0){
//              int t=arr[i];
//              arr[i]=arr[k];
//              arr[k]=t;
//              k++;
//          }
//      }
//      if (i==s){
//          for (int j=0;j<s;j++){
//              printf("%d",arr[j]);
//          }
//      }
//      return 0;
//  }

// c
// alternate swap
//  #include<stdio.h>
//  int main(int argc, char const *argv[])
//  {
//      int i,n,arr[]={1,2,3,4,5,6};
//      int s=sizeof(arr)/sizeof (arr[0]);
//      for (i=0;i<s-1;i+=2){
//          int t=arr[i];
//          int r=arr[i+1];
//          arr[i+1]=t;
//          arr[i]=r;
//      }
//      if (i==s){
//          for (int j=0;j<s;j++){
//              printf("%d",arr[j]);
//          }
//      }
//      return 0;
//  }

// c
//  #include<stdio.h>
//  int main(int argc, char const *argv[])
//  {
//      int i,j,arr[]={3,2,4,5,2,4,5,7};
//      int s=sizeof(arr)/sizeof (arr[0]);
//      for (i=0;i<s;i++){
//          int c=0;
//          for (j=0;j<s;j++){
//              if(arr[i]==arr[j]){
//                  c++;
//              }
//          }
//          if (c==1){
//              printf("%d",arr[i]);
//              break;
//          }
//      }
//      return 0;
//  }

// c
//  #include<stdio.h>
//  int main(int argc, char const *argv[])
//  {
//      int arr[]={1,2,3,4,5,3,6};
//      int s=sizeof(arr)/sizeof(arr[0]);
//      for (int i=0;i<s;i++){
//          int c=0;
//          for (int j=0;j<s;j++){
//              if (arr[i]==arr[j]){
//                  c++;
//              }
//          }
//          if (c==2){
//              printf("%d",arr[i]);
//              break;
//          }
//      }
//      return 0;
//  }

// c
//  #include<stdio.h>
//  int main(int argc, char const *argv[])
//  {
//      int n;
//      printf("enter no of array:");
//      scanf("%d",&n);
//      for (int i=0;i<n;i++){
//          int e,e1;
//          printf(" No of elements of elements in array 1:");
//          scanf("%d",&e);
//          int arr1[e];
//          for (int j=0;j<e;j++){
//              scanf("%d",&arr1[j]);
//          }
//          printf("No of elements of elemets in array 2:");
//          scanf("%d",&e1);
//          int arr2[e1];
//          for (int j=0;j<e1;j++){
//              scanf("%d",&arr2[j]);
//          }
//          for (int c=0;c<e;c++){
//              for (int d=0;d<e1;d++){
//                  if (arr1[c]==arr2[d]){
//                      printf("%d \n",arr1[c]);
//                  }
//              }
//          }
//      }
//      return 0;
//  }

// c
//  #include<stdio.h>
//  int main(int argc, char const *argv[])
//  {
//      int n,arr[]={1,3,6,2,5,4,3,2,4};
//      int s=sizeof (arr)/sizeof(arr[0]);
//      scanf("%d",&n);
//      int c=0;
//      for (int i=0;i<s;i++){
//          for(int j=i+1;j<s;j++){
//              int b=arr[i]+arr[j];
//              if (b==n){
//                  c++;
//              }
//          }
//      }
//      printf("%d",c);
//      return 0;
//  }

// c
//  #include<stdio.h>
//  int main(int argc, char const *argv[])
//  {
//      int n ,arr[]={1,2,3,4,5,6,7};
//      int s=sizeof (arr)/sizeof (arr[0]);
//      scanf("%d",&n);
//      int c=0;
//      for(int i=0;i<s;i++){
//          for (int j=i+1;j<s;j++){
//              for (int k=j+1;k<s;k++){
//                  int b=arr[i]+arr[j]+arr[k];
//                  if (b==n){
//                      c++;
//                      printf("%d %d %d\n",arr[i],arr[j],arr[k]);

//                 }

//             }
//         }
//     }
//     printf("%d",c);
//     return 0;
// }

// c
//  #include<stdio.h>
//  int main(int argc, char const *argv[])
//  {
//      int n;
//      printf("enter no of array:");
//      scanf("%d",&n);
//      for (int i=0;i<n;i++){
//          int e,e1;
//          printf(" No of elements of elements in array 1:");
//          scanf("%d",&e);
//          int arr1[e];
//          for (int j=0;j<e;j++){
//              scanf("%d",&arr1[j]);
//          }
//          printf("No of elements of elemets in array 2:");
//          scanf("%d",&e1);
//          int arr2[e1];
//          for (int j=0;j<e1;j++){
//              scanf("%d",&arr2[j]);
//          }
//          for (int c=0;c<e;c++){
//              for (int d=0;d<e1;d++){
//                  if (arr1[c]==arr2[d]){
//                      printf("%d \n",arr1[c]);
//                  }
//              }
//          }
//      }
//      return 0;
//  }

// c
//  #include<Stdio.h>
//  int main(int argc, char const *argv[])
//  {
//      int arr[]={1,0,1,0,1,1};
//      int s=sizeof (arr)/sizeof(arr[0]);
//      for (int i=0;i<s;i++){
//          if (arr[i]==0){
//              printf("%d",arr[i]);
//          }
//      }
//      for (int i=0;i<s;i++){
//          if (arr[i]==1){
//              printf("%d",arr[i]);
//          }
//      }
//      return 0;
//  }

// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     int s,e;
//     printf("no:");
//     scanf("%d %d",&s,&e);
//     for (int i=s;i<=e;i++){
//         int sum=0;
//         for (int j=1;j<i;j++){
//             if (i%j==0){
//                 sum=sum+j;
//             }
//         }
//         if (sum==i){
//             printf("%d is a prefect no",i);
//         }
//     }
//     return 0;
// }

// c
// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     int s,e;
//     printf("no;");
//     scanf("%d %d",&s,&e);
//     for (int i=s;i<=e;i++){
//         int c=0;
//         for (int j=1;j<i;j++){
//             if (i%j==0){
//                 c++;
//             }
//         }
//         if (c%2==0){
//             printf("%d ",i);
//         }
//     }
//     return 0;
// }

// c
//  #include<stdio.h>
//  int main(int argc, char const *argv[])
//  {
//      int s,e;
//      printf("no:");
//      scanf("%d %d",&s,&e);
//      for (int i=s;i<=e;i++){
//          int sum=0;
//          int rem,num=i;
//          while(num!=0){
//              rem=num%10;
//              int f=1;
//              while (rem!=0)
//              {
//                  f=f*rem;
//                  rem--;
//              }
//              sum+=f;
//              num/=10;
//          }
//          if (sum==i){
//              printf("%d is a strong no",sum);
//          }
//      }
//      return 0;
//  }

// c
// union of array
// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
//     int arr[5] = {1, 2, 4, 6, n};
//     int arr1[4] = {1, 3, 2, 9};
//     int i, arr2[9];
//     for (i = 0; i < 5; i++)
//     {
//         arr2[i] = arr[i];
//     }
//     for (int j = 0; j < 4; j++)
//     {
//         int flag=0;
//         for (int t = 0; t < 4; t++)
//         {
//             if (arr1[j] == arr2[t])
//             {
//                 flag=1;
//                 break;
//             }
//         }
//         if (flag==0){
//             arr2[i++] = arr1[j];
//         }
//     }
//     for (int j = 0; j < i; j++)
//     {
//         printf("%d ", arr2[j]);
//     }
//     return 0;
// }

// c
// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
//     int arr1[1000], arr[] = {2, 3, 4, 2, 5, 5, 3, 9, 4};
//     int s = sizeof(arr) / sizeof(arr[0]);
//     for (int i = 0; i < s; i++)
//     {
//         int c = 1;
//         for (int j = i+1; j < s; j++)
//         {
//             if (arr[i] == arr[j])
//             {
//                 c++;
//                 arr[j] = -1;
//             }
//         }
//         arr1[i] = c;
//     }
//     for (int i = 0; i < s; i++)
//     {
//         if (arr[i] != -1)
//         {
//             printf("%d:%d\n", arr[i],arr1[i]);
//         }
//     }
//     return 0;
// }

// c
// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
//     int n;
//     printf("no:");
//     scanf("%d", &n);
//     int a, arr[n];
//     for (int i = 0; i < n - 1; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     int total = n * (n + 1) / 2;
//     for (int j = 0; j < n - 1; j++)
//     {
//         total -= arr[j];
//     }
//     printf("%d", total);
//     return 0;
// }

// c
//  #include <stdio.h>

// int main(int argc, char const *argv[]) {
//     int n;
//     printf("no:");
//     scanf("%d", &n);
//     int arr[n];
//     for (int i = 0; i < n - 1; i++) {
//         scanf("%d", &arr[i]);
//     }

//     for (int t = 0; t < n; t++) {
//         for (int e = t + 1; e < n; e++) {
//             if (arr[t] > arr[e]) {
//                 int temp = arr[t];
//                 arr[t] = arr[e];
//                 arr[e] = temp;
//             }
//         }
//     }

//     for (int j = 0; j < n-1; j++) {
//         printf("%d ", arr[j]);
//     }
//     printf("\n");

//     int i, d;
//     for (i = 0; i < n-1; i++) {
//         d = arr[i + 1] - arr[i];
//         if (d == 2) {
//             printf("%d ", arr[i] + 1);
//             break;
//         }
//     }
//     // Check for missing element at the end of the sequence
//     if (arr[n-2] == n-1) {
//         printf("%d ", n);
//     }
//     return 0;
// }

// c
//  #include<stdio.h>
//  int main(int argc, char const *argv[])
//  {
//      int arr[5]={1,2,3,2,1};
//      int paln=1;
//      for(int i=0;i<5/2;i++){
//          if (arr[i]!=arr[5-i-1]){
//              paln=0;
//              break;
//          }
//      }
//      if (paln==1){
//          printf("the array is plandrome");
//      }
//      else{
//          printf("not plandrome");
//      }

//     return 0;
// }

// c
//  #include<stdio.h>
//  #include<math.h>
//  int main(int argc, char const *argv[])
//  {
//      int n;
//      printf("no:");
//      scanf("%d",&n);
//      int j=0,sum=0;
//      for (int i=n;i!=0;i/=10){
//          int rem=i%10;
//          if (rem!=0){
//              int b=pow(2,j);
//              sum+=b;
//              j++;
//          }
//          else{
//              j++;
//          }
//      }
//      printf("%d",sum);
//      return 0;
//  }

// c
// set of patter
// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
//     int n;
//     printf("no:");
//     scanf("%d", &n);
//     int arr[n];
//     for (int p = n - 1; p >= 0; p--)
//     {
//         scanf("%d", &arr[p]);
//     }
//     for (int p = n - 1; p >= 0; p--)
//     {
//         printf("%d", arr[p]);
//     }
//     printf("\n");
//     int j;
//     int i, arr1[n];
//     for (i = n - 1; i >= 0; i--)
//     {
//         int d = arr[i] - arr[i - 1];
//         if (d > 1)
//         {
//             for (j = n - 1; j >= i - 1; j--)
//             {
//                 printf("%d",i-1);
//             }
//             for (int k = j; k >= 0; k--)
//             {
//                 printf("%d",k);
//             }
//             break;
//         }
//         else if  (i == 0)
//         {
//             for (int l = n - 1; l >= 0; l--)
//             {
//                 printf("%d",l);
//             }
//         }
//     }
//     return 0;
// }

// c
// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
//     int arr[5] = {21, 53, 64, 34, 78};
//     for (int i = 0; i < 5; i++)
//     {
//         int rem, num = arr[i], rev = 0;
//         while (num != 0)
//         {
//             rem = num % 10;
//             rev = (rev * 10) + rem;
//             num /= 10;
//         }
//         int rem2;
//         while (rev != 0)
//         {
//             rem2 = rev % 10;
//             rev /= 10;
//             printf("%d ", rem2);
//         }
//     }
//     return 0;
// }

// c
//  #include<stdio.h>
//  int main(int argc, char const *argv[])
//  {
//      int n;
//      printf("no:");
//      scanf("%d",&n);
//      int a=0,b=1;
//      if (n==0){
//          printf("%d",a);
//      }
//      else if (n==1){
//          printf("%d %d",a,b);
//      }
//      else{
//          printf("%d %d ",a,b);
//          for(int i=2;i<n;i++){
//              int c=a+b;
//              a=b;
//              b=c;
//              printf("%d ",c);
//          }
//      }
//      return 0;
//  }

// c
//  #include<stdio.h>
//  int main(int argc, char const *argv[])
//  {
//      int n;
//      printf("no:");
//      scanf("%d",&n);
//      int a=0,b=1,c=0;
//      while(c<n){
//          c=a+b;
//          a=b;
//          b=c;
//      }
//      if (c==n){
//          printf("fibonacci no");
//      }
//      else{
//          printf("not a fibonacci no");
//      }
//      return 0;
//  }

// c
// insert;
// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
//     int n;
//     printf("no:");
//     scanf("%d", &n);
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     int p, e;
//     printf("enter the element:");
//     scanf("%d", &e);
//     printf("enter the position:");
//     scanf("%d", &p);
//     if (p > n - 1)
//     {
//         printf("postion is not valid");
//     }
//     else
//     {
//         for (int i =n-1; i>=p-1; i--)
//         {
//             arr[i+1]=arr[i];
//         }
//         arr[p-1]=e;
//         for (int i=0;i<=n;i++){
//             printf("%d",arr[i]);
//         }
//     }
//     return 0;
// }

// c
// delete
// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
//     int n;
//     printf("no:");
//     scanf("%d", &n);
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     int p;
//     printf("enter the position:");
//     scanf("%d", &p);
//     if (p > n - 1)
//     {
//         printf("postion is not valid");
//     }
//     else
//     {
//         for (int i = p - 1; i < n - 1; i++)
//         {
//             arr[i] = arr[i + 1];
//         }
//         for (int i = 0; i < n - 1; i++)
//         {
//             printf("%d ", arr[i]);
//         }
//     }
//     return 0;
// }

// c
//  subset of a array;
//  #include<stdio.h>
//  int main(int argc, char const *argv[])
//  {
//      int arr1[5]={1,2,3,4,5};
//      int arr2[3]={3,5,4};
//      int count=0;
//      for (int i=0;i<3;i++){
//          for (int j=0;j<5;j++){
//              if (arr2[i]==arr1[j]){
//                  count++;
//                  break;
//              }
//          }
//      }
//      if (count ==3){
//          printf("true");
//      }
//      else{
//          printf("false");
//      }
//      return 0;
//  }

// C
//  //intersection of array
//  #include<stdio.h>
//  int main(int argc, char const *argv[])
//  {
//      int arr1[5]={1,2,3,4,5};
//      int arr2[3]={2,3,4};
//      for (int i=0;i<3;i++){
//          for (int j=0;j<5;j++){
//              if (arr2[i]==arr1[j]){
//                  printf("%d ",arr2[i]);
//                  break;
//              }
//          }
//      }
//      return 0;
//  }

// c
// duplicate
// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
//     int arr[6] = {1, 2, 3, 4, 5, 3};
//     for (int i = 0; i < 6; i++)
//     {
//         int c = 0;
//         for (int j = 0; j < 6; j++)
//         {
//             if (arr[i] == arr[j])
//             {
//                 c++;
//             }
//         }
//         if (c == 2)
//         {
//             printf("%d", arr[i]);
//             break;
//         }
//     }
//     return 0;
// }

// c
//  unique
// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
//     int arr[8] = {1, 2, 3, 2, 5, 5, 1};
//     for (int i = 0; i < n; i++)
//     {
//         int c = 0;
//         for (int j = 0; j < n; j++)
//         {
//             if (arr[i] == arr[j])
//             {
//                 c++;
//             }
//         }
//         if (c == 1)
//         {
//             printf("%d ", arr[i]);
//         }
//     }
//     return 0;
// }

// c
// set of patter
// #include <stdio.h>
// int main()
// {
//     int n = 7;
//     int i;
//     int arr[n];
//     for (i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     for (i = 1; i <= n; i++)
//     {
//         int j;
//         for (j = 0; j < n; j++)
//         {
//             if (i == arr[j])
//             {
//                 printf("%d ", j);
//                 int index;
//                 for (index = j; index < n; index++)
//                 {
//                     arr[index] = arr[index + 1];
//                 }
//             }
//         }
//     }
// }

// c
//  #include <stdio.h>
//  int main(int argc, char const *argv[])
//  {
//      int n;
//      int p,arr[7];
//      for (p = 7 - 1; p >= 0; p--)
//      {
//          scanf("%d", &arr[p]);
//      int j;
//      int l,d,k,i, arr1[7];
//      for (i = 7 - 1; i >= 0; i--)
//      {
//          d = arr[i] - arr[i - 1];
//          if (d > 1)
//          {
//              for (j = 7 - 1; j >= i - 1; j--)
//              {
//                  printf("%d ",i-1);
//              }
//              for (k = j; k >= 0; k--)
//              {
//                  printf("%d ",k);
//              }
//              break;
//          }
//          else if  (i == 0)
//          {
//              for (l = 7 - 1; l >= 0; l--)
//              {
//                  printf("%d ",l);
//              }
//          }
//      }
//      return 0;
//  }
//  }

// c
// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     int n,k;
//     printf("no:");
//     scanf("%d",&n);
//     printf("key");
//     scanf("%d",&k);
//     int arr[n];
//     for (int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     int t;
//     for (t=0;t<n;t++){
//         if (arr[t]==k){
//             printf("%d",arr[t]);
//             break;
//        }
//     }
//     if (t==n){
//         printf ("your no is not present in array");
//     }
//     return 0;
// }

// c
//  #include<stdio.h>
//  int main(int argc, char const *argv[])
//  {
//      int arr[6]={1,2,3,4,5,6};
//      int earr[100],oarr[100];
//          int k=0,j=0;
//      for(int i=0;i<6;i++){
//          if (arr[i]%2==0){
//              earr[k]=arr[i];
//              k++;
//          }
//          else{
//              oarr[j]=arr[i];
//              j++;
//          }
//      }
//      for (int t=0;t<k;t++){
//          printf("%d ",earr[t]);
//      }
//      printf("\n");
//      for (int t=0;t<j;t++){
//          printf("%d ",oarr[t]);
//      }
//      return 0;
//  }

// c
//  swap
//  #include<stdio.h>
//  int swap(int *a,int *b,int *c);
//  int main(int argc, char const *argv[])
//  {
//      int a,b,c;
//      scanf("%d %d %d",&a,&b,&c);
//      swap(&a,&b,&c);
//      printf("%d %d %d",a,b,c);
//      return 0;
//  }
//  int swap(int *a,int *b,int *c){
//      int t=*a;
//      *a=*b;
//      *b=*c;
//      *c=t;
//      printf("%d %d %d",*a,*b,*c);
//  }

// c
// tanspose of a matrix
//  #include<stdio.h>
//  int main(int argc, char const *argv[])
//  {
//      int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//      int t[3][3];
//      for (int i=0;i<3;i++){
//          for (int j=0;j<3;j++){
//              t[i][j]=arr[j][i];
//          }
//      }
//      for (int i=0;i<3;i++){
//          for (int j=0;j<3;j++){
//              printf("%d ",t[i][j]);
//          }
//          printf("\n");
//      }
//      return 0;
//  }

// c
// multiply of matrix
//  #include<stdio.h>
//  int main(int argc, char const *argv[])
//  {
//      int arr1[2][2]={{1,2},{3,4}};
//      int arr2[2][2]={{5,6},{7,8}};
//      int mul[2][2],val;
//      for (int i=0;i<2;i++){
//          for (int p=0;p<2;p++){
//              mul[i][p]=0;
//              for (int j=0;j<2;j++){
//                  mul[i][p]+=arr1[i][p]*arr2[j][p];
//              }
//          }
//      }
//      for (int t=0;t<2;t++){
//          for (int f=0;f<2;f++){
//              printf("%d ",mul[t][f]);
//          }
//          printf("\n");
//      }
//      return 0;
//  }

// c
//  binary to decimal conversion
//  #include <stdio.h>

// int main() {
//     int decimal, binary = 0, rem, power = 1;

//     printf("Enter a decimal number: ");
//     scanf("%d", &decimal);

//     while(decimal > 0) {
//         rem = decimal % 2;
//         binary += rem * power;
//         decimal /= 2;
//         power *= 10;
//     }
//     printf("The binary equivalent is: %d", binary);
//     return 0;
// }

// c
// prime no
// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
// 	int n;
// 	printf("no:");
// 	scanf("%d", &n);
// 	int flag = 0;
// 	for (int i = 2; i < n; i++)
// 	{
// 		if (n % i == 0)
// 		{
// 			flag = 1;
// 		}
// 	}
// 	if (flag == 1)
// 	{
// 		printf("not a prime no");
// 	}
// 	else
// 	{
// 		printf("prime no");
// 	}
// 	return 0;
// }

// c
// prime no series
// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
//     int n;
//     printf("no:");
//     scanf("%d", &n);
//     for (int t = 2; t <= n; t++)
//     {
//         int flag = 0;
//         for (int i = 2; i < t; i++)
//         {
//             if (t % i == 0)
//             {
//                 flag = 1;
//             }
//         }
//         if (flag == 0)
//         {
//             printf("%d ", t);
//         }
//     }
//     return 0;
// }

// c
// second max
// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
//     int arr[5] = {2, 5, 4, 3, 1};
//     int max1;
//     int max2;
//     // for (int i = 0; i < 5; i++)
//     // {
//     //     for (int j = i + 1; j < 5; j++)
//     //     {
//     //         if (arr[i] > arr[j])
//     //         {
//     //             int t = arr[i];
//     //             arr[i] = arr[j];
//     //             arr[j] = t;
//     //         }
//     //     }
//     // }
//     // for (int i = 0; i < 5; i++)
//     // {
//     //     printf("%d", arr[i]);
//     // }
//     max1=0;
//     for(int i=0;i<5;i++){
//         if (max1<arr[i]){
//             max1=arr[i];
//         }
//     }
//     // max1 = arr[5 - 1];
//     max2=0;
//     for (int i = 0; i < 5; i++)
//     {
//         if (max2<arr[i] && arr[i]!=max1){
//             max2=arr[i];
//         }
//     }
//     printf("%d ",max2);
//     return 0;
// }

// c
//  #include<stdio.h>
//  int main(int argc, char const *argv[])
//  {
//      int arr[6]={1,0,2,0,1,0};
//      for(int i=0;i<6;i++){
//          if (arr[i]!=0){
//              printf("%d",arr[i]);
//          }
//      }
//      for (int i=0;i<6;i++){
//          if (arr[i]==0){
//              printf("%d",arr[i]);
//          }
//      }
//      return 0;
//  }

// c
//  #include<stdio.h>
//  int main(int argc, char const *argv[])
//  {
//      int n;
//      printf("no:");
//      scanf("%d",&n);
//      int rem1,remb,rem,sum,rev=0;
//      int x=n;
//      while (n!=0){
//          remb=n%10;
//          rev=(rev*10)+remb;
//          n/=10;
//      }
//      printf("%d\n",rev);
//      n=x;
//      while (n!=0){
//          rem=n%10;
//          while (rev!=0){
//              rem1=rev%10;
//              sum=rem+rem1;
//              break;
//          }
//          rev/=10;
//          printf("%d ",sum);
//          n/=10;
//      }
//      return 0;
//  }

// c
//  #include<stdio.h>
//  int main(int argc, char const *argv[])
//  {
//      int n;
//      printf("no:");
//      scanf("%d",&n);
//      int rem1[100],remb,rem[100],sum,rev=0;
//      int x=n;
//      while (n!=0){
//          remb=n%10;
//          rev=(rev*10)+remb;
//          n/=10;
//      }
//      printf("%d\n",rev);
//      int k=0,i=0;
//      n=x;
//      while (n!=0){
//          rem[i++]=n%10;
//          n/=10;
//      }
//      while (rev!=0){
//          rem1[k++]=rev%10;
//          rev/=10;
//      }
//      for (int l=0;l<i;l++){
//          sum=rem[l]+rem1[l];
//          printf("%d ",sum);
//      }
//      return 0;
//  }

// c
//  no of notes required for  amount
//  #include<stdio.h>
//  int main(int argc, char const *argv[])
//  {
//      int n;
//      printf("no:");
//      scanf("%d",&n);
//      printf("500=%d\n",(n/500));
//      printf("100=%d\n",(n%500)/100);
//      printf("50=%d\n",((n%500)%100)/50);
//      printf("10=%d\n",(((n%500)%100)%50)/10);
//      printf("5=%d\n",((((n%500)%100)%50)%10)/5);
//      printf("2=%d\n",(((((n%500)%100)%50)%10)%5)/2);
//      printf("1=%d\n",((((((n%500)%100)%50)%10)%5)%2)/1);
//      return 0;
//  }

// c
// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
//     int n = 5, a;
//     printf("no:");
//     scanf("%d", &a);
//     int arr[5][5] = {{1, 2, 3, 8, 9}, {4, 1, 3, 5, 6}, {7, 1, 2, 8, 9}, {3, 5, 6, 0, 1}, {6, 2, 9, 5, 3}};
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             printf("%d", arr[i][j]);
//         }
//         printf("\n");
//     }
//     // for (int i = 0; i < n; i++)
//     // {
//     //     for (int j = 0; j < n; j++)
//     //     {
//     //         scanf("%d", &arr[i][j]);
//     //     }
//     // }
//     for (int i = 0; i < n; i++)
//     {
//         int var = arr[i][a];
//         printf("%d ", var);
//         if (a == 0)
//         {
//             break;
//         }
//         a--;
//     }
//     return 0;
// }

// c
// #include <stdio.h>
//     int
//     main()
// {
//     int n;
//     scanf("%d", &n);
//     int m;
//     scanf("%d", &m);
//     int i, j;
//     int arr[n][n];
//     for (i = 0; i < n; i++)
//     {
//         for (j = 0; j < n; j++)
//         {
//             scanf("%d", &arr[i][j]);
//         }
//     }
//     i = 0;
//     j = m;
//     while (m != -1)
//     {
//         printf("%d ", arr[i][j]);
//         m--;
//         j--;
//         i++;
//     }
// }

// c
//  #include<stdio.h>
//  int main(int argc, char const *argv[])
//  {
//      int a,b,c;
//      printf("no:");
//      scanf("%d %d %d",&a,&b,&c);
//      if (c>b){
//          int div=c/b;
//          if(div<=a){
//              printf("%d",div);
//          }
//          else if (div>a){
//              printf("%d",a);
//          }
//          else{
//              printf("0");
//          }

//     }
//     else{
//         printf("0");
//     }
//     return 0;
// }

// c
// #include <stdio.h>
// int main()
// {
//     float amount, rate, time, si;
//     printf("Enter principal (Amount) :");
//     scanf("%f", &amount);
//     printf("Enter rate :");
//     scanf("%f", &rate);
//     printf("Enter time (in years) :");
//     scanf("%f", &time);
//     si = (amount * rate * time) / 100;
//     printf("\nSimple Interest is = %.4f", si);
//     return 0;
// }

// c
//  #include<stdio.h>
//  void main()
//  {
//  	 int y;
//  	 printf("Enter year: ");
//  	 scanf("%d", &y);
//  	 if (y%4 == 0 && y%400==0 || (y%100!=0))
//  	 {
//  	  printf("%d is a leap year.", y);
//  	 }
//  	 else
//  	 {
//  	  printf("%d is not a leap year.", y);
//  	 }
//  }

// c
// #include <stdio.h>
// int main()
// {
//     int classes_held, classes_attended;
//     char medical_cause;
//     float percentage;
//     scanf("%d", &classes_held);
//     scanf("%d", &classes_attended);
//     scanf(" %c", &medical_cause);

//     percentage = (float)classes_attended / classes_held * 100;
//     if (percentage < 75)
//     {
//         if (medical_cause == 'Y' || medical_cause == 'y')
//         {
//             printf("You have attended %.2f%% classes. You are allowed to sit for the exam\n", percentage);
//         }
//         else
//         {
//             printf("You have attended %.2f%% classes. You are not allowed to sit for the exam\n", percentage);
//         }
//     }
//     else
//     {
//         printf("You have attended %.2f%% classes. You are allowed to sit for the exam\n", percentage);
//     }
//     return 0;
// }

// c
//  #include<stdio.h>
//  #include<math.h>
//  int main(int argc, char const *argv[])
//  {
//      int s,t;
//      printf("no:");
//      scanf("%d %d",&s,&t);
//      for (int i=s;i<=t;i++){
//          int num=i,sum=0;
//          int c=0;
//          while(num!=0){
//              c++;
//              num/=10;
//          }
//          num=i;
//          while(num!=0){
//              int rem=num%10;
//              sum+=pow(rem,c);
//              num/=10;
//          }
//          if (sum==i){
//              printf("%d ",sum);
//          }
//      }
//      return 0;
//  }

// c
//  #include <stdio.h>
//  #include <math.h>

// int main() {
//     int a, e, j, mod, x, sum;
//     printf("Enter the lower and upper limits of the range: ");
//     scanf("%d %d", &a, &e);
//     for (int i = a; i <= e; i++) {
//         x = i;
//         // length
//         j = 0;
//         while (x > 0) {
//             x = x / 10;
//             j = j + 1;
//         }
//         x = i;
//         sum = 0;
//         // armstrong no
//         while (x > 0) {
//             mod = x % 10;
//             sum = sum + pow(mod, j);
//             x = x / 10;
//         }
//         if (sum == i) {
//             printf("%d ", sum);
//         }
//     }
//     return 0;
//  }