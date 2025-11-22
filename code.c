#include <stdio.h>
#include <math.h>

int main() {
    char ath_name[100];
    char ath_gender[100];
    char type_stroke[100];
    char coun_name[50];
    int age,rank,ch;
    float b_time,t_time;
    double points;
    printf("\nEnter name of the athlete:");
    scanf("%s",&ath_name);//used for  multiple characters
    printf("\nEnter the country the athlete represents:");
    scanf("%s",&coun_name);
    printf("\nEnter gender of the athlete:");
    scanf("%s",&ath_gender);
    printf("\nEnter the age of the athlete:");
    scanf("%d",&age);
   
    printf("\nEnter the type of stroke performed by the athlete:");
    printf("\n1.women free style stroke___50m__\n2.men free style stroke___50m___ s\n3.women butterfly stroke___50m__ s\n4.men butterfly stroke___50m___ ");
    printf("\nEnter your option from above list:");
    scanf("%d",&ch);
    if(ch==1){
        printf("\nbase time:22.83s");
        
    }
    else if(ch==2){
        printf("\nbase time:19.90s");
    }
    else if(ch==3){
        printf("\nbase time:23.94s");
    }
    else if(ch==4){
        printf("\nbase time:21.32s");
    }
    else{
        printf("\ninvalid option");
    }
    printf("\n________________________________________");
    printf("\nEnter base time for the particular stroke:");
    scanf("%f",&b_time);
    printf("\nTime taken by the athlete to complete the course:");
    scanf("%f",&t_time);
    if(b_time>t_time){
        printf("\nThe swimmers' time is faster than the base time.points will be over 1000. ");
        
    }
    points = 1000.0 * pow(b_time/t_time,3);
    int final_point=(int)points;
    printf("\n___________________________________________");
    printf("\nThe athletes points:%d\n",final_point);
    if(final_point>1000){
        printf("\nGRADE=A");
    }
    else if(final_point>500){
        printf("\nGRADE=B");
    }
    else{
        printf("\nGRADE=C");
    }
        
    return 0;
}

