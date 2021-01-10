#include<stdio.h>

    void vote_presedent(int N , int v)
    {

        // arrys of presedent
        char presedent[N][30];
        // arrays of voteur
        char voteur[v][30];
        //// arrays of 0 vote a every presedent
        char starting[N];
        int vote[v]; /// arrays of stocking les vote
        int index = 0;  /// variable stocky every vote a chaque loops.
        float result[N]; /// stockage OF EVERY PERCENTAGE OF PRESEDENT


        //// partie add les presedent
        
        for(int i = 0 ; i < N ; i++)
        {
            printf("add presedent : ");
            scanf("%s" , presedent[i]); //// stockage les presedent in arrays presedent[]
            starting[i]=0;
        }

        ///// partie add voteur 

        for(int i = 0 ; i < v; i++)
        {
            printf("add voteur : ");
            scanf("%s" , voteur[i]); //// stockage les voteur in arrays presedent[]
        }
      
        /////: partie de premier vote

            void parte_vote_1()
            {

                for(int i = 0 ; i < v; i++)
                {
                    printf("\n\n\n ur have this presedent vote in ur presedent  : \n");  
                    for(int i = 0 ; i < N; i++)
                        {
                            int k = i+1;  // for start in 1
                            printf("%i ==> %s\n" , k , presedent[i]); /// chaque loop we show hem all presedent
                        }
                    printf("\n\n\n ur CIN is : %s  chose number of ur presedent  ?  : " , voteur[i]);
                   scanf("%i" , &vote[i]); ///  stockage des vote in arrays vote[]

                    index = vote[i]-1; /// stockage  vote every voteur in j; and vote[i]-1 = pour starting value-1 IN THE ARRAYS
                    starting[index]++;          /// go to the index j and incrument the value of arrays starting in this ndex;

                }

        /*start delete part */

                // show all vote we have

                for(int i = 0 ; i < v; i++)
                {
                    printf("- %i -" , vote[i]);
                }
                // show total  vote of evevry presedent

                printf("\nall vote of every presedent\n");
                for(int i = 0 ; i < N; i++)
                {
                    printf("%s  -> %i \n" , presedent[i], starting[i]);
                }

                /// show les vote pour percentage % of every presedent

                 printf("\nles perentage vote a chaque presedent : \n");
                for(int i = 0 ; i < N; i++)
                {
                    result[i] = (float)starting[i]/v*100;
                    printf("%s  -> %.2f%% \n" , presedent[i], result[i]);
                }

      /*  fin deletet part */

                    /// show if all vote its egale or not

                    printf("\nshow if les vote is egale or nn \n");
                    int test_egal=0;  /// variable incrument if the vote is egal                  
                    for(int i = 0 ; i <N ; i++)
                    {
                        int next_vote = i+1;
                        if(starting[i] == starting[next_vote])
                        {
                            test_egal++; ///every egal we incrument this value
                        }
                        
                    }
                    if( test_egal == N-1)  // N-1 == cuz test_egal he not arrive fin the N
                    {
                        //// her we repete the vote because all presedent has the same vote
                        printf("is egale cuz test_egal = %i  need to repete the vote \n",test_egal);
                        for(int i = 0 ; i <N ; i++)
                        {
                            starting[i] = 0;
                        }
                        parte_vote_1();
                    }
                    else{
                        printf("is not egale cuz  test_egal= %i u should go to the next vote ",test_egal);
                        /// her we remove the presedent he has less vote and started new vote
                        /// we should desincrument N
                        int index_presedent_delete = 0;
                       // mn = result[0]; /// mn le prmier value in rhis arrays
                        for(int i=1; i < N; i++)
                        {

                            if(result[i] < 15) /// we SHOW if the result of vote every presedent is less than 15%
                            {
                                index_presedent_delete = i; // the index he incrument
                                printf("\n");
                                printf("presedent has a vote less than 15%% is %s and the index of this presedent  is %i " , presedent[index_presedent_delete],index_presedent_delete);
                                printf("\n");
                                        for (int i = index_presedent_delete ; i < N ; i++)
                                        presedent[i][20] = presedent[i+1][20];
                                        N--;
                            }
                            printf("%s\n" ,  presedent[i]);

                        }

                    }
            }
           
            parte_vote_1();



    }



int main()
{



    vote_presedent(6,12);

    return 0;
}