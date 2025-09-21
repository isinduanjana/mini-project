void andidate(){
                while (c<1)   {
                printf("1. Add \n2. Exit \nSelect ");
                scanf("%d",&cx);
                if (cx>0 && cx<3) {
                if (cx==1){
                printf("\n1. Enter candidate name \t:");
                scanf("%ls",cn);
                printf("\n2. Party of candidate   \t:");
                scanf("%d",&cy);
                cc++;
                printf("\nCandidate ID = %s %d \n\nSuccessful\n------------------\n\n",ap[cy],ac[cc]);}//pa tempory                //save in document
                else if (cx==2){
                    c++;
                }

                }
                else {
                printf("Enter valid number\n");}
                                }
                                c--;
                            }