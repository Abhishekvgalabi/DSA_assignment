#include<stdio.h>
struct cplayer
{
    char cname[20];
    char nationality[20];
    int rank,tot_runs;
    float bat_avg;
}c1,c2,c3;

main()
{
    void less_bat_avg(struct cplayer c1,struct cplayer c2,struct cplayer c3);
    void more_rank(struct cplayer c1,struct cplayer c2,struct cplayer c3);
    printf("enter the cricket player details\n");
    printf("enter the name and nationality and rank and total runs and batting avg of player 1\n");
    scanf("%s %s %d %d %f",&c1.cname,&c1.nationality,&c1.rank,&c1.tot_runs,&c1.bat_avg);
     printf("enter the name and nationality and rank and total runs and batting avg of player 2\n");
    scanf("%s %s %d %d %f",&c2.cname,&c2.nationality,&c2.rank,&c2.tot_runs,&c2.bat_avg);
     printf("enter the name and nationality and rank and total runs and batting avg of player 3\n");
    scanf("%s %s %d %d %f",&c3.cname,&c3.nationality,&c3.rank,&c3.tot_runs,&c3.bat_avg);

    less_bat_avg(c1,c2,c3);
    more_rank(c1,c2,c3);
}

void less_bat_avg(struct cplayer c1,struct cplayer c2,struct cplayer c3)
{
    printf("the cricket player details whose batting average is less\n");
    if(c1.bat_avg<c2.bat_avg && c1.bat_avg<c3.bat_avg)
     printf("name=%s  nataion=%s  odirank=%d total score=%d   batting avg=%f \n",c1.cname,c1.nationality,c1.rank,c1.tot_runs,c1.bat_avg);
     else if(c2.bat_avg<c1.bat_avg  && c2.bat_avg<c3.bat_avg)
        printf("name=%s  nataion=%s  odirank=%d total score=%d   batting avg=%f \n",c2.cname,c2.nationality,c2.rank,c2.tot_runs,c2.bat_avg);
     else if(c3.bat_avg<c1.bat_avg  && c3.bat_avg<c2.bat_avg)
     printf("name=%s  nataion=%s  odirank=%d total score=%d   batting avg=%f \n",c3.cname,c3.nationality,c3.rank,c3.tot_runs,c3.bat_avg);
}

void more_rank(struct cplayer c1,struct cplayer c2,struct cplayer c3)
{
      printf("the cricket player details whose ODI RANK is more\n");
    if(c1.rank<c2.rank && c1.rank<c3.rank)
     printf("name=%s  nataion=%s  odirank=%d total score=%d   batting avg=%f \n",c1.cname,c1.nationality,c1.rank,c1.tot_runs,c1.bat_avg);
     else if(c2.rank<c1.rank  && c2.rank<c3.rank)
        printf("name=%s  nataion=%s  odirank=%d total score=%d   batting avg=%f \n",c2.cname,c2.nationality,c2.rank,c2.tot_runs,c2.bat_avg);
     else if(c3.rank<c1.rank  && c3.rank<c2.rank)
     printf("name=%s  nataion=%s  odirank=%d total score=%d   batting avg=%f \n",c3.cname,c3.nationality,c3.rank,c3.tot_runs,c3.bat_avg);

}
