#include<stdio.h>

    void vote_presedent()
    {
        
        int N = 6;
        int v = 5;
        // arrys of presedent
        char *presedent[N];
        // arrays of voteur
        char *voteur[v];

        //// partie add les presedent
        
        for(int i = 0 ; i < N ; i++)
        {
            printf("add presedent : ");
            scanf("%s" , &presedent[i]);
        }

        ///// partie add voteur 

        for(int i = 0 ; i < v; i++)
        {
            printf("add voteur : ");
            scanf("%s" , &voteur[i]);
        }
      
        ///// partie de vote 

            int *vote[v];
            for(int i = 0 ; i < v; i++)
                {
                    printf("ur have this presedent vote in ur presedent prefer :");
                    for(int i = 0 ; i < N; i++)
                        {
                            printf("%s - " , &presedent[i]);
                        }
                    printf("\n ur CIN is : %s \n" , &voteur[i]);
                    scanf("%s" , &vote[i]);
                }
            
            /// show les vote
            printf("this is all vote aviable :");
            for(int i = 0 ; i < v ; i++)
            {
                printf("%s - " , &vote[i]);
            }


    }
int main()
{



    vote_presedent();

    return 0;
}