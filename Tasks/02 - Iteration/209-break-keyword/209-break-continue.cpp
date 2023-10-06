#include <stdio.h> 

int main()
{
    bool y = false;
    
    for (int i = 0; i <= 10; i++)   // potentially loop from 1 to 10  
    {
        char c = getchar(); //Read character
        char _ = getchar(); //Read and discard newline (nice little hack :)
        if (c == 'q')          
        {
            printf("\tUser stopped the loop early at %d\n", i);
            y = true;
            if (y == true);
            {
                printf("you exited the loop, Loop counter = %d\n", i);
            }
            break;                  // break out of the for loop
             
        }
        
        
    }
    puts("Done");
}
