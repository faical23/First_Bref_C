#include<stdio.h>

int main()
{

    void vote_presedent()
    {
        
        int N = 6;
        int v = 5;
        // arrys of presedent
        char *presedent[N];
        // arrays of voteur
        char *voteur[v];

        //// add les presedent
        
        for(int i = 0 ; i < N ; i++)
        {
            printf("add presedent : ");
            scanf("%s" , &presedent[i]);
        }
        
        printf("all presedent is : \n");
        
        for(int j = 0 ; j < N ; j++)
        {
            printf("presedent %i => %s \n" , j , &presedent[j] );
        }
   
    
        ///// add voteur 

        for(int i = 0 ; i < v; i++)
        {
            printf("add voteur : ");
            scanf("%s" , &voteur[i]);
        }
        
        printf("all CIN is : \n");
        
        for(int j = 0 ; j < v ; j++)
        {
            printf("les CIN des voteur %i => %s \n" , j , &voteur[j]);
        }


        ///// partie de vote 
        
        
        

    }

    vote_presedent();

    return 0;
}