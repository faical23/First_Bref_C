#include<stdio.h>
#include <stdbool.h> 

    void vote_presedent(int N , int v)
    {

        
        char presedent[N][30]; // arrys of presedent
        char voteur[v][30];  // arrays of voteur
        char starting[N]; //// arrays of 0 vote a every presedent
        int vote[v]; /// arrays of stocking les vote of voteur
        int index = 0;  /// variable stocky every vote a chaque loops.
        float result[N]; /// stockage OF EVERY PERCENTAGE OF PRESEDENT
        int z = 0; /// 
        int delete_presedent[z]; /// stockage index of presedent we should deleted



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
                //// loops for vote every voteur
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

                    /// show if all vote its egale or not and show if we have more than one presedent winn

                    printf("\nshow if les vote is egale or nn \n");
                    int test_egal=0;  /// variable incrument if the vote is egal  
                    bool we_have_one_pre_win = false;   /// variable boolean he change to true if we have one pre wi in the first 
                    
                    /// show if we have one pre win
                    for (int i = 0 ; i<N ; i++)
                    {
                        if(result[i] == 100.00)
                        {
                            we_have_one_pre_win = true;
                        }
                    }

                    /// show if we have egalité in vote
                    for(int i = 0 ; i <N ; i++)
                    {
                        int next_vote = i+1;
                        if(starting[i] == starting[next_vote])
                        {
                            test_egal++; ///every egal we incrument this value
                        }
                        
                    }
                    if( test_egal == N-1 || we_have_one_pre_win == true )  // N-1 == cuz test_egal he not arrive fin the N
                    {
                        //// her we repete the vote because all presedent has the same vote
                        printf("\nles vote its egal or we have one winn u should to rapete the votes : \n");
                        for(int i = 0 ; i <N ; i++)
                        {
                            starting[i] = 0;
                        }
                        parte_vote_1();
                    }
                    else{
                        printf("\n les vote is not egale cuz  test_egal= %i u should go to the next vote round ",test_egal);
                        /// her we remove the presedent he has less vote and started new vote
                        /// we should desincrument N
                        int index_presedent_delete = 0;
                        //int v = 0;
                       // mn = result[0]; /// mn le prmier value in rhis arrays
                       
                        for(int i = 0; i < N; i++)
                        {

                            if( result[i] < 15) /// we SHOW if the result of vote every presedent is less than 15%
                            {      
                                index_presedent_delete = i; // the index he incrument
                                printf("\n");
                                printf("presedent has a vote less than 15%% is %s and the index of this presedent  is %i " , presedent[index_presedent_delete],index_presedent_delete);
                                printf("\n");
                                delete_presedent[z] = index_presedent_delete; // stockage index of deleted in arrays
                                z++;
                                
                            }
                            
                        }
                        

                    }
            }

            parte_vote_1();
            
    /*
            printf("\n");
            /// show all index deleted 
            for(int i = 0 ;i < z ; i++)
            {
                printf("index  %i \n" , delete_presedent[i]);
            }
    */
    /*

            for(int i = 0 ; i < N ; i++) 
           {
               printf("%.2f\n" , result[i]);
           }
    */

            //// make new array without the presedent we removed in the first votes

                int p = 0; /// size of new arrays 
                char new_array[N][10]; /// make new arrays to stockage all presedent win in the first round 
                int x = 0; /// for while loop
                int index_new_arrays = 0; /// first index in the new arrays
                while( x < N)
                {
                                    
                    if(result[x] > 15)
                    {
                        p++; /// seize of second arrays he is incrument
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



    }



int main()
{


    vote_presedent(6,12);

    return 0;
}