/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct student{
    int top;
    int *arr;
    int size;
}student;
int isempty(student *s1){
    if(s1->top==-1){
        return 1;
    }
    return 0;
}
int isfull(student *s1){
    if(s1->top==s1->size-1){
        return 1;
    }
    return 0;
}
void push(student *s1,int value){
    if(!isfull(s1)){
        s1->top++;
        s1->arr[s1->top]=value;
    }
    else{
        printf("full");
    }
}
int pop(student *s1){
    if(isempty(s1)){
        printf("already empty");
    }
    else{
        int value=s1->arr[s1->top];
        s1->size--;
        return value;
    }
}
void print(student *s1,int size){
    for(int i=0;i<size;i++){
        printf("%d ",s1->arr[i]);
    }
    printf("\n");
}
int main(){
    student s1;
    s1.size=4;
    s1.top=-1;
    s1.arr=(int*)malloc(s1.size*(sizeof(int)));
    push(&s1,1);
    push(&s1,3);
    push(&s1,4);
    push(&s1,7);
    print(&s1,s1.size);
    pop(&s1);
    print(&s1,s1.size);
    return 0;
}*/


/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 50
int top=-1;count=0;
char input[max];
char output[max];
void push(char s){
    if(top==max-1){
        printf("overflow");
        return;
    }
    top++;
    input[top]=s;
}
void pop(){
    if(top==-1){
        printf("underfow");
        return;
    }
    output[count++]=input[top--];
}
int main(){
    char str[max];
    printf("enter the string");
    gets(str);
    for(int i=0;i<strlen(str);i++){
        push(str[i]);
    }
    for(int i=0;i<strlen(str);i++){
        pop();
    }
    for(int i=0;i<strlen(str);i++){
        printf("%c",output[i]);
    }
    return 0;
}*/


// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #define max 30
// char stack[max];
// int top=-1,count=0;
// void push(char s){
//     if(top==max-1){
//         printf("alreeady full");
//         return;
//     }
//     top++;
//     stack[top]=s;
// }
// char pop(){
//     char value=stack[top];
//     top--;
//     return value;
// }
// int main(){
//     char str[max];
//     printf("enter the string:");
//     gets(str);
//     for(int i=0;i<strlen(str);i++){
//         if(str[i]=='{' || str[i]=='(' || str[i]=='['){
//             push(str[i]);

//         }
//         else if(str[i]==')' || str[i]==']' || str[i]=='}'){
//             if(top==-1){
//                 printf("unbalanced brackets");
//                 return 0;
//             }
//             char brac=pop();
//             if((str[i]==')' && brac!='(') || (str[i]==']' && brac!='[')|| (str[i]=='}' && brac!='{')){
//                 printf("unbalanced brackets");
//                 return 0;
//             }   
//         }
//     }
//     if(top==-1){
//         printf("balanced brackets");
//     }
//     else{
//         printf("unbalanced brackets");
//     }
//     return 0;

// }


// # include <stdio.h>
// # include <stdlib.h>
// # include <ctype.h>
// # include <string.h>
// #define size 100
// int top = -1;
// int arr[size];

// void push(int c)
// {
//     if(top==size-1)
//     {
//         printf("overflow");
//     }
//     top++;
//     arr[top] = c;
// }
// int pop()
// {
//     if(top==-1)
//     {
//         printf("underflow");
//     }
//     int val = arr[top];
//     top--;
//     return val;
// }


// void postfix(char arr[])
// {
//     int i;
//     char ch;
//     int a,b;
//     int val;
//     for(i=0; arr[i]!='\0';i++)
//     {
//         ch = arr[i];
//         if(isdigit(ch))
//         {
//             push(ch - '0');
//         }
//         else if(ch=='+' || ch=='-' || ch=='*' || ch=='/')
//         {
//             a = pop();
//             b = pop();

//             switch(ch){
//                 case '*':
//                 val = b*a;
//                 break;
//                 case '/':
//                 val = b/a;
//                 break;
//                 case '+':
//                 val = b+a;
//                 break;
//                 case '-':
//                 val = b-a;
//                 break;
//             }
//             push(val);
//         }
//     }
//     printf("postfix value is %d",pop());
// }
// int main()
// {
//     char ch[100];
//     printf("enter the expression : ");
//     fgets(ch,100,stdin);

//     postfix(ch);
//     return 0;
// }



/*#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define max 40
int top=-1,count=0;
int stack[max];
void push(char s){

    top++;
    stack[top]=s;
}
int pop(){
    
    int value=stack[top];
    top--;
    return value;
}
void prefix(char arr[]){
    char n;
    int a,b;
    int value;
    for(int i=strlen(arr)-1;i>=0;i--){
        n=arr[i];
        if(isdigit(n)){
            push(n-'0');
        }
        else if(n=='+'||n=='-'||n=='*'||n=='/'){
            a=pop();
            b=pop();
            switch(n){
                case '*':{
                    value=a*b;
                    break;
                }
                case '/':{
                    value=a/b;
                    break;
                }
                case '-':{
                    value=a-b;
                    break;
                }
                case '+':{
                    value=a+b;
                    break;
                }
            }
            push(value);
        }
    }
    printf("%d",pop());
}
int main(){
    char str[max];
    printf("enter the string:");
    fgets(str,max,stdin);
    prefix(str);
    return 0;

}*/



/*#include <stdio.h>
#include <stdlib.h>
#define max 40
int top=-1,count=0;
char  stack[max];
char output[max];
void push(char s){
    top++;
    stack[top]=s;

}
void pop(){
    output[count++]=stack[top--];
}
int main(){
    char str[max];
    printf("enter the string:");
    gets(str);
    int i;
    for(i=0;str[i]!='\0';i++){
        push(str[i]);
    }
    for(i=0;str[i]!='\0';i++){
        pop();
    }
    for(i=0;str[i]!='\0';i++){
        printf("%c",output[i]);
    }
    return 0;
}
*/



/*#include <stdio.h>
#include <stdlib.h>

#define max 8
int compare(const void *a,const void *b){
    int a_int=((int)a);
    int b_int=((int)b);
    if(a_int >b_int){
        return 1;
    }
    else if(a_int==b_int){
        return 0;
    }
    else{
        return 0;
    }
}
int main(){
    int arr[max]={1,8,5,6,3,9,2,1};
    qsort(arr,max,sizeof(arr[0]),compare);
    for(int i=0;i<max;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}*/




/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 30
int top=-1;
int stack[max];
void push(int s){
    if(top==max-1){
        printf("full");
        return ;
    }
    top++;
    stack[top]=s;

}
int pop(){
    if(top==-1){
        printf("empty");
        return 0;
    }
    int value=stack[top];
    top--;
    return value;
}
void postfix(char arr[]){
    char ch;
    int a,b,value;
    for(int i=0;arr[i]!='\0';i++){
        ch=arr[i];
        if(ch>='0' && ch<='9'){
            push(ch-'0');
        }
        else if(ch=='+' || ch=='-' || ch=='/' || ch=='*'){
            a=pop();
            b=pop();
            switch(ch){
                case '*':{
                    value=a*b;
                    break;
                }
                case '/':{
                    value=a/b;
                    break;
                }
                case '-':{
                    value=a-b;
                    break;
                }
                case '+':{
                    value=a+b;
                    break;
                }

            }
            push(value);
        }
    }
    printf("the postfix will be:%d",pop());
}
int main(){
    char str[max];
    printf("Enter the string: ");
    fgets(str,max,stdin);
    postfix(str);
    return 0;

}*/



/*#include <stdio.h>
#include <stdlib.h>
struct queue{
    int size;
    int f;
    int r;
    int *arr;
};
int isfull(struct queue *e){
    if(e->r==e->size-1){
        return 1;
    }
    return 0;
    
}
int isempty(struct queue *e){
    if(e->r==e->f){
        return 1;
    }
    return 0;
}
void enque(struct queue *q,int value){
    if(isfull(q)){
        printf("full");
    }
    else{
        q->r++;
        q->arr[q->r]=value;
    }
}
int deque(struct queue *q){
    if(isempty(q)){
        printf("empty");
    }
    else{
        q->f++;
        return q->arr[q->f];
    }
}
int main(){
    struct queue q;
    q.size=100;
    q.r=q.f=-1;
    q.arr=(int*)malloc(q.size*sizeof(int));
    enque(&q,6);
    enque(&q,98);
    enque(&q,1);
    printf("dequeueing:%d\n",deque(&q));
    printf("dequeueing : %d\n",deque(&q));
    printf("dequeueing : %d\n",deque(&q));
    if(isempty(&q)){
        printf("empty");


    }
    else if(isfull(&q)){
        printf("full");
    }
    return 0;
}*/







/*#include <stdio.h>
#include <stdlib.h>
struct queue{
    int size;
    int f;
    int r;
    int *arr;
};
int isfull(struct queue *e){
    if((e->r+1)%e->size==e->f){
        return 1;
    }
    return 0;
    
}
int isempty(struct queue *e){
    if(e->r==e->f){
        return 1;
    }
    return 0;
}
int enque(struct queue *q,int value){
    if(isfull(q)){
        printf("full");
    }
    else{
        q->r=(q->r+1)%q->size;
        q->arr[q->r]=value;
        return q->arr[q->r];
    }
}
int deque(struct queue *q){
    if(isempty(q)){
        printf("empty");
    }
    else{
        q->f=(q->f+1)%q->size;
        return q->arr[q->f];
    }
}
int main(){
    struct queue q;
    q.size=5;
    q.r=q.f=0;
    q.arr=(int*)malloc(q.size*sizeof(int));
    printf("enqueing:%d",enque(&q,6));
    printf("enqueing:%d",enque(&q,5));
    printf("enqueing:%d",enque(&q,9));
    printf("enqueing:%d",enque(&q,98));
    printf("dequeueing:%d\n",deque(&q));
    printf("dequeueing : %d\n",deque(&q));
    printf("dequeueing : %d\n",deque(&q));
    printf("enqueing:%d",enque(&q,1));
    printf("enqueing:%d",enque(&q,65));
    printf("enqueing:%d",enque(&q,4));
    if(isempty(&q)){
        printf("empty");


    }
    if(isfull(&q)){
        printf("full");
    }
    return 0;
}
*/




/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define siz 15
typedef struct inf{
    int top;
    int size;
    char *arr;

}inf;
int stack(student *s1){
    return s->arr[s->top];
}
void push(inf *s1,char ch){
    if(s1->top==size-1){
        printf("full");
        return;
    }
    s1->top++;
    s1->arr[s1->top]=ch;
}
char pop(inf *s1){
    if(s1->top==-1){
        printf("empty");
        return 0;
    }
    char value=s1->arr[s1->top];
    top--;
    return value;
}
int isoperator(char ch){
    if(ch=='+' || ch=='-' || ch=='/' || ch=='*'){
        return 1;
    }
    return0;
}
int preceedence(char ch){
    if(ch='*' || ch='/'){
        return 2;
    }
    if(ch=='-' || ch=='+'){
        return 1;
    }
    return 0;
}
char
char *convert(char *infix){
    inf s1=(inf*)malloc(sizeof(inf));
    s1->size=siz;
    s1->top=-1;
    s1->arr=(char*)malloc(s1->size*sizeof(char));
    char postfix=(char)malloc(strlen(infix)+1*sizeof(char));
    char ch;
    int i=0;j=0;
    while(infix[i]!='\0'){
        if(!(isoperator(infix[i]))){
            postfix[j]=infix[i];
            j++;
            i++;
        }
        else{
            if(precedence(infix[i])>precedence(stack(s1))){
                push(s1,infix[i]);
                i++;
            }
            else{
                postfix[j]=pop(s1);
                j++;
            }
        }
    }
    if(!(s1->top==-1)){
        postfix[j]=pop(s1);
        j++;
    }
    postfix[j]='\0';
    return postfix;
}
int main(){
    char infix[siz];
    printf("enter the string:");
    gets(infix);
    char *postfix=convert(infix);
    printf("%s",postfix);
    return 0;
}*/