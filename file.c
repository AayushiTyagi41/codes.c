#include <limits.h>                                                                
#include <stdio.h>                                                                 
#include <stdlib.h>                                                                
                                                                                   
struct named_file {                                                                
        const char *name;                                                          
        FILE *fp;                                                                  
};                                                                                 
                                                                                   
void xfopen(struct named_file *f, const char *mode);                               
void xfclose(struct named_file *f);                                                
void display(const struct named_file *f);                                          
                                                                                   
int main(void)                                                                         
{                                                                                  
        struct named_file f[3];                                                    
        int n;                                                                     
                                                                                   
        f[0].name = "NUMBER.txt";                                                  
        f[1].name = "EVEN.txt";                                                    
        f[2].name = "ODD.txt";                                                     
                                                                                   
        xfopen(f, "w");                                                            
        while( scanf("%d", &n) == 1 ){                                             
                fprintf(f[0].fp, "%d\n", n);                                       
        }                                                                          
        xfclose(f);                                                                
                                                                                   
        xfopen(f + 0, "r");                                                        
        xfopen(f + 1, "w");                                                        
        xfopen(f + 2, "w");                                                        
                                                                                   
        while( fscanf(f[0].fp, "%d", &n) == 1 ){                                   
                FILE *out = n % 2 ? f[2].fp : f[1].fp;                             
                fprintf(out, "%d\n", n);                                           
        }                                                                          
        for( int i = 0; i < 3; i += 1 ){                                           
                xfclose(f + i);                                                    
                xfopen(f + i, "r");                                                
                display(f + i);                                                    
                xfclose(f + i);                                                    
        }                                                                          
}                                                                                  
     
void                                                                               
xfopen(struct named_file *f, const char *mode)                                     
{                                                                                  
        f->fp = fopen(f->name, mode);                                              
        if( f->fp == NULL ){                                                       
                perror(f->name);                                                   
                exit(EXIT_FAILURE);                                                
        }                                                                          
}                                                                                  
                                                                                   
void                                                                               
xfclose(struct named_file *f)                                                      
{                                                                                  
        if( fclose(f->fp) ){                                                       
                perror(f->name);                                                   
                exit(EXIT_FAILURE);                                                
        }                                                                          
}                                                                                  
                                                                                   
void                                                                               
display(const struct named_file *f)                                                
{                                                                                  
        int n;                                                                     
        printf("The contents of %s: ", f->name);                                   
        while( fscanf(f->fp, "%d", &n) == 1 ){                                     
                printf(" %d",n);                                                   
        }                                                                          
        putchar('\n');                                                             
}  