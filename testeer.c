#include <stdio.h>

int main()
{
    int N = 6;
    char presedent[6][10]={"faical","amine","salah","abdo","marwan","mohamed"};
    int result[6]={16,7,5,33,6,16};
    int p = 0;
    char new_array[N][10];
    int x = 0;
    int index_new_arrays = 0;
    while( x < N)
    {
                        
        if(result[x] > 15)
        {
            p++;
            for(int i = 0 ; i < 30 ; i++ )
            {
                new_array[index_new_arrays][i]= presedent[x][i];
            }
            index_new_arrays++;
        }
            x++;
    }
    printf("les presedent libqaaw : \n");
            
    for(int i = 0 ; i < p ;i++)
    {
        printf("%s\n", new_array[i]);
    }
        printf("p == %i", p);
    

    return 0;
}