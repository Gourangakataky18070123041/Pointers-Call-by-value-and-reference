# Pointers-Call-by-value-and-reference
## Aim:-
        Implementation of Call by Value and Call by Reference for a function
### Theory:-
            Call by value method copies the value of an argument into the formal parameter of that function. Therefore, changes made to the parameter of the main function do not affect the argument.In this parameter passing method, values of actual parameters are copied to function's formal parameters, and the parameters are stored in different memory locations. So any changes made inside functions are not reflected in actual parameters of the caller.
            Call by reference method copies the address of an argument into the formal parameter. In this method, the address is used to access the actual argument used in the function call. It means that changes made in the parameter alter the passing argument.In this method, the memory allocation is the same as the actual parameters. All the operation in the function are performed on the value stored at the address of the actual parameter, and the modified value will be stored at the same address.
#### Algorithm:-
             1)Cally by Reference
                void swap(int *x,int *y);
                int main()
                int x,y
                printf("Enter two numbers:\n")
                swap(&x,&y)
                void swap(int *x,int *y)
                int t
                t=*x
                *x=*y
                *y=t
                
            2)Call by Value
                 void swap(int x,int y);
                 int main()
                 int a,b
                 printf("Enter two numbers:-\n")
                 scanf("%d%d",&a,&b)
                 swap(a,b)
                 void swap(int x,int y)
                 int t
                 t=x
                 x=y
                 y=t             
##### Conclusion:-
                In these two programs we learnt how to apply call by value and call by reference to a function
            
