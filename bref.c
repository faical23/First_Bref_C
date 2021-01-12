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
        int z = 0; ///  stockage size of delete presedent
        int delete_presedent[z]; /// stockage index of presedent we should deleted
        int p = 0; /// size of new arrays 
        char second_arrays_presedent[N][10]; /// make new arrays to stockage all presedent win in the first round 
        int x = 0; /// first while loop
        int index_new_arrays = 0; /// first index in the new arrays 2
        char third_arrays_presedent[N][10];
        int y = 0 ; /// second while loop
        int index0_third_arrays = 0; /// first index in the new arrays 3
        int q = 0 ; /// size of third arrays presedent



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
      
        /////: start the first voting

        printf("\n\n\n this is the first round of voting  \n\n\n ");

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
                     ///// make  second arrays without the presedent lose
                   // int g = 0; //// he is incrument if find percentage more thn 15% and if g > 3 we go to the next 

                        int TEST = 0;
                        int c = 0;
                        while(c < N)
                        {
                            if(result[c] >= 15.00)
                            {
                                TEST++;
                            }
                        c++;
                        }

                    if( test_egal == N-1 || we_have_one_pre_win == true || TEST <= 2)  // N-1 == cuz test_egal he not arrive fin the N
                    {
                        //// her we repete the vote because all presedent has the same vote
                        printf("\nles vote its egal or we have one winn  or we have just 2 winn u should to rapete the votes  TEST --> %i: \n" , TEST);
                        for(int i = 0 ; i <N ; i++)
                        {
                            starting[i]=0;
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
                
                    ///// make  second arrays without the presedent lose
                    while( x < N)
                    {
                                        
                        if(result[x] > 15)
                        {
                            p++; /// seize of second arrays he is incrument
                            for(int i = 0 ; i < 30 ; i++ )
                            {
                                second_arrays_presedent[index_new_arrays][i]= presedent[x][i];
                            }
                            index_new_arrays++;
                        }
                            x++;
                    }
                
                    printf("les presedent libqaaw : \n");
                            
                    for(int i = 0 ; i < p ;i++)
                    {
                        printf("%s\n", second_arrays_presedent[i]);
                    }
                        printf("p == %i", p);
                        printf("TEST == %i\n", TEST);

            }

        parte_vote_1();
            


        ///// start secound round voting


          printf("\n\n\n this is the second round of voting  \n\n\n ");


        void parte_vote_2()
                {
                        int stockage_vote[p];
                        for(int i = 0 ; i < p ; i++)
                        {
                            stockage_vote[i]= 0;
                        }

                        //// start second vote

                        for(int i = 0 ; i < v; i++)
                        {
                            printf("\n\n\n u have this presedent vote in ur presedent  : \n");  
                            for(int i = 0 ; i < p ; i++)
                                {
                                    int k = i+1;  // for start in 1
                                    printf("%i ==> %s\n" , k , second_arrays_presedent[i]); /// chaque loop we show hem all presedent
                                }
                            printf("\n\n\n ur CIN is : %s  chose number of ur presedent  ?  : " , voteur[i]);
                            scanf("%i" , &vote[i]); ///  stockage des vote in arrays vote[]

                            index = vote[i]-1; /// stockage  vote every voteur in j; and vote[i]-1 = pour STOCKAGE VOTE value-1 IN THE ARRAYS
                           stockage_vote[index]++;          /// go to the index j and incrument the value of arrays stOCKAGE VOTE in this ndex;

                        }

                        /// show les vote the evevry presedent 
                        printf("this  votes of evevry presedent in second round \n\n");
                        for(int i = 0 ; i < p ; i++)
                        {
                            printf("%s ---> %i\n" , second_arrays_presedent[i] ,stockage_vote[i]  );
                        }

                        ////show if we have egalite in second round
                        int test_egal = 0;
                        for(int i = 0 ; i < p ; i++)
                        {
                            int next_vote = i+1;
                            if(stockage_vote[i] == stockage_vote[next_vote])
                            {
                                test_egal++; ///every egal we incrument this value
                            }
                        
                        }
                        //// show if we have one presedent winn
                        bool have_one_winn = false; //// boolean change if we have one winner
                        for(int i = 0 ; i < p ; i++)
                        {
                            if(stockage_vote[i] == v )
                            {
                                 have_one_winn = true;
                            }
                        }


                        if( test_egal == p-1 || have_one_winn == true )
                        {
                            printf("\n\n we have a egalaty or we have one winn should repete the voting \n\n ");
                            parte_vote_2();
                        }
                        else{
                            
                            //// search the presedent has the min vote
                            int min = stockage_vote[0];
                            int index_pre_min = 0;
                                for(int i = 1; i < p; i++)
                                {
                                    if(min > stockage_vote[i])
                                    {
                                        min = stockage_vote[i];
                                        index_pre_min = i;
                                    }
                                }


                            //// show the presedent lose
                            printf("\n\n ");
                            printf("the presedent lose is --> %s   has index ---> %i in the vote is %i" ,second_arrays_presedent[index_pre_min ] , index_pre_min , min );
                            printf("\n\n");


                            ///// make new third arrays presedent with the presedent winns
                                 printf("the presedent go to the third roun dis :\n\n");

                                while( y < p)
                                {
                                    if(!(stockage_vote[y] == min))
                                    {
                                        q++; /// seize of second arrays he is incrument
                                        for(int i = 0 ; i < 30 ; i++ )
                                        {
                                            third_arrays_presedent[index0_third_arrays ][i]= second_arrays_presedent[y][i];
                                        }
                                        index0_third_arrays ++;
                                    }
                                    y++;
                                }
                                for(int i = 0 ; i < q ;i++)
                                {
                                    printf(" %s \n" , third_arrays_presedent[i]);
                                }
                                printf("q --->  %i " , q);

                        }                       
                }

        parte_vote_2();


        //// start the third round voting


         printf("\n\n this is the third round of voting  \n\n");

         void parte_vote_3()
         {
            int stockage_vote_3[q]; /// stockage les vote
            for(int i = 0 ; i < q ; i++)
            {
                stockage_vote_3[i]= 0;
            }

            //// start third vote

            for(int i = 0 ; i < v; i++)
            {
                printf("\n\n\n u have this presedent vote in ur presedent  : \n");  
                for(int i = 0 ; i < q ; i++)
                {
                    int k = i+1;  // for start in 1
                    printf("%i ==> %s\n" , k , third_arrays_presedent[i]); /// chaque loop we show hem all presedent
                }
                printf("\n\n\n ur CIN is : %s  chose number of ur presedent  ?  : " , voteur[i]);
                scanf("%i" , &vote[i]); ///  stockage des vote in arrays vote[]

                index = vote[i]-1; /// stockage  vote every voteur in j; and vote[i]-1 = pour STOCKAGE VOTE value-1 IN THE ARRAYS
                stockage_vote_3[index]++;          /// go to the index j and incrument the value of arrays stOCKAGE VOTE in this ndex;

             }

                // show les vote the evevry presedent 
                printf("this  votes of evevry presedent in third round \n\n");
                for(int i = 0 ; i < q ; i++)
                {
                    printf("%s ---> %i\n" , third_arrays_presedent[i] ,stockage_vote_3[i]  );
                }

                /// search presedent has a max of vote
                int max = stockage_vote_3[0]; 
                int index_pre_max = 0;
                for(int i = 1; i < q ; i++)
                {
                    if(max < stockage_vote_3[i])
                    {
                        max = stockage_vote_3[i];
                        index_pre_max = i;
                     }
                }
                ///// search if we have egality or 
                printf("\n\n");
                int we_have_egal = 0;
                for(int i = 0 ; i < N ; i++)
                {
                    if(stockage_vote_3[i] == max)
                    {
                        we_have_egal++;
                    }
                }
                
                if( we_have_egal > 1)
                {
                    printf("we have egality we should repete the voting ");
                    printf("\n\n");
                    parte_vote_3();

                }
                else{
                    printf("Congratulations the presedent win is ---> %s her index is --> %i with vote has is ----> %i" ,third_arrays_presedent[index_pre_max] ,index_pre_max, max);
                }                

         }
         parte_vote_3();

    }



int main()
{
    int N ;
    int v ;
    printf("how many  presedent do you have ? -->");
    scanf("%i" , &N);
    
    printf("\n\n");
    
    printf("how many  presedent do you have ? -->");
    scanf("%i" , &v);


    vote_presedent(N,v);

    return 0;
}