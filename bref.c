#include<stdio.h>

    void vote_presedent()
    {
        
        int N = 6;
        int v = 15;
        // arrys of presedent
        char presedent[N][30];
        // arrays of voteur
        char voteur[v][30];

        //// partie add les presedent
        
        for(int i = 0 ; i < N ; i++)
        {
            printf("add presedent : ");
            scanf("%s" , presedent[i]); //// stockage les presedent in arrays presedent[]
        }

        ///// partie add voteur 

        for(int i = 0 ; i < v; i++)
        {
            printf("add voteur : ");
            scanf("%s" , voteur[i]); //// stockage les voteur in arrays presedent[]
        }
      
        ///// partie de premier vote

            int vote[v];
            for(int i = 0 ; i < v; i++)
                {
                    printf("ur have this presedent vote in ur presedent prefer : \n");  
                    for(int i = 0 ; i < N; i++)
                        {
                            int k = i+1;  // for start in 1
                            printf("%i ==> %s\n" , k , presedent[i]); /// chaque loop we show hem all presedent
                        }
                    printf("\n ur CIN is : %s \n" , voteur[i]);
                    scanf("%i" , &vote[i]); /// stockage des vote in arrays vote[]
                }
            
        /// show les vote
        int n = 1;
        int size = v;
        int r = 0;
        printf("this is all vote aviable :");
        for(int i = 0 ; i < size ; i++)
        {
            for(int j = i+1 ; j < size ; j++)
            {
                if(vote[i] == vote[j])
                {
                    /* Delete the current duplicate element */
                    for(int k=j ; k < size ; k++)
                    {
                        vote[k] = vote[k + 1];
                    }

                    /* Decrement size after removing duplicate element */
                    size--;

                    /* If shifting of elements occur then don't increment j */
                    j--;
                    n++;
                }
            }
            printf("%i - %i : ", n , vote[i]);
            n = 1;

        }
                
    }



int main()
{



    vote_presedent();

    return 0;
}