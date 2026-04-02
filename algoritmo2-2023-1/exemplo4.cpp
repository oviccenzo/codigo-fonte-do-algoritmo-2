#include <cstdio>
int main ()
{
    int candidateA=0, candidateB=0, candidateC=0, candidateD=0, vote_white=0, vote_null=0, votes=1;//Creating variables for cad candidate e para o vote
    while(votes>=1)// random loop pra montage de votes
    {
        printf("1 - candidateA \n");
        printf("2 - candidateB \n");
        printf("3 - candidateC \n");
        printf("4 - candidateD \n");
        printf("6 - Vote null \n");
        printf("0 - Enhancer \n");
        scanf("%d", &votes);

        switch(votes) // Command switch que attribute cad vote ea sua variable decode
        {
            case 0: break; // caso o voto seja 0 sai do loop
            case 1: candidateA++; break;
            case 2: candidateB++; break;
            case 3: candidateC++; break;
            case 4: candidateD++; break;
            case 5: vote_null++; break;
            case 6: vote_white++; break;
            default: printf("Vote invalid!\n"); break; // case o elector vote em um candidate nonexistent ser notification
        }
    }
    //sequence de prints para exhibit resultant final
    printf("Resulted da votary:  \n");
    printf("CandidateA: %d votes \n",candidateA);
    printf("CandidateB: %d votes \n",candidateB);
    printf("CandidateC: %d votes \n",candidateC);
    printf("CandidateD: %d votes \n",candidateD);
    printf("Votes nulls: %d \n",vote_null);
    printf("Votes branch: %d \n", vote_white);
}

