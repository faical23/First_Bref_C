#include<stdio.h>

    void vote_presedent()
    {
        
        int N = 7;
        int v = 5;
        // arrys of presedent
        char presedent[N][30];
        // arrays of voteur
        char voteur[v][30];

        //// partie add les presedent
        
        for(int i = 0 ; i < N ; i++)
        {
            printf("add presedent : ");
            scanf("%s" , presedent[i]);
        }

        ///// partie add voteur 

        for(int i = 0 ; i < v; i++)
        {
            printf("add voteur : ");
            scanf("%s" , voteur[i]);
        }
      
        ///// partie de vote 

            int vote[v];
            for(int i = 0 ; i < v; i++)
                {
                    printf("ur have this presedent vote in ur presedent prefer : \n");  
                    for(int i = 0 ; i < N; i++)
                        {
                            int k = i+1;  // for start in 1
                            printf("%i ==> %s\n" , k , presedent[i]);
                        }
                    printf("\n ur CIN is : %s \n" , voteur[i]);
                    scanf("%i" , &vote[i]);
                }
            
        /// show les vote
        printf("this is all vote aviable :");
        for(int i = 0 ; i < v ; i++)
        {
                printf("%i - " , vote[i]);
        }


    }
int main()
{



    vote_presedent();

    return 0;
}