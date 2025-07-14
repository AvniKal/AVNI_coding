#include<iostream> 
   using namespace std;  
   
    

    // when a function calls itself 
    // until a specific condition is met
    // no condition given then segmentation/stack overflow
    // stop condition is called base condition

     

    // recursion tree    
     //  F()-F()-f()-f()

     //example 1
     /*int c=0;
     void f()
     {
        if(c==3)
           return;
        cout<<c;
        c++;
        f();
     }
    main()
    {
        f();
    }    */


    // example 2 (print name n times)
    /* int c=0;
    void name()
    {
       if(c==n)
          return;
       cout<<"avni";
       c++;
       name();
    }
    void main()
    {
     f();
    }   */



    /* example 3 (factorial of n numbers)

    f(n)
    {
      if (n==0)
        return 1;
      return n*f(n-1);
     }

     main()
     {
     int n=3;
     f(n);
     }      */


     










   