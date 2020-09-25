//code


#include <stdio.h> 
  

  
// Function definition 
void design(int n) 
{ 
     
    for (int i = 1; i <= n; i++) { 
  
        int k = (i % 2 != 0) ? i + 1 : i; 
  
        
        for (int g = n; g > k; g--) 
           printf(" "); 
  
        
        for (int j = 0; j < k; j++) 
            printf("* "); 
        printf("\n"); 
    } 
} 
  

int main() 
{ 
    int n = 6; 
    design(n); 
    return 0; 
} 
