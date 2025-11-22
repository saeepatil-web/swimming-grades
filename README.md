RESEARCH:
Grading System The grades of A, B, C, D and P are passing grades. Grades of F and U are failing grades. R and I are interim grades. Grades of W and X are final grades carrying no credit. Individual instructors determine criteria for letter grade assignments described in individual course syllabi. 
Explanation of Grades The quality of performance in any academic course is reported by a letter grade, assigned by the instructor. These grades denote the character of study and are assigned quality points as follows:

A   Excellent    4 grade points per credit 
B   Good           3 grade points per credit
C   Average     2 grade points per credit
D   Poor          1 grade point per credit
F   Failure       0 grade points per credit
I   Incomplete No credit, used for verifiable, unavoidable reasons

ANALYSIS:
Passing Grade -The grades O, A, B, C, D, E are passing grades. A candidate acquiring any one of these grades in a course shall be declared as pass. And studentS shall earn the credits for a course only if the student gets a passing grade in that course. 
 F Grade -The grade F shall be treated as a failure grade. The student with F grade will have to pass the concerned course by re-appearing for the examination. The student with F grade for any stage of the Project Work, will have to carry out additional work/ improvement as suggested by the examiners and re-appear for the examination. 



IDEATE:
SWIMMING POINTS
The World Aquatics Points Table allows comparisons of results among different events. The World Aquatics Point Scoring assigns point values to swimming performances, more points for world class performances typically 1000 or more and fewer points for slower performances.
Point values are assigned every year. The charts have one set of points for Short Course and another for Long Course. 


FORMULA
The points are calculated using a cubic curve. With the swim time (T) and the base time (B) in seconds the points (P) are calculated with the following formula:
P = 1000 * (B / T)³
 
The exact formula is used to calculate points from times
BASE TIMES FOR 1000 POINTS
The base times are defined for all common individual events and relays, separated for men / women and long course / short course.



BUILD:
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



TEST:
CASE 1:

Enter name of the athlete:riya

Enter the country the athlete represents:india

Enter gender of the athlete:female

Enter the age of the athlete:22

Enter the type of stroke performed by the athlete:
1.women free style stroke___50m__
2.men free style stroke___50m___ s
3.women butterfly stroke___50m__ s
4.men butterfly stroke___50m___ 
Enter your option from above list:1

base time:22.83s
________________________________________
Enter base time for the particular stroke:22.83

Time taken by the athlete to complete the course:20

The swimmers' time is faster than the base time.points will be over 1000. 
___________________________________________
The athletes points:1487

GRADE=A

=== Code Execution Successful ===

CASE 2:
Enter name of the athlete:JAY

Enter the country the athlete represents:australia

Enter gender of the athlete:male

Enter the age of the athlete:22

Enter the type of stroke performed by the athlete:
1.women free style stroke___50m__
2.men free style stroke___50m___ s
3.women butterfly stroke___50m__ s
4.men butterfly stroke___50m___ 
Enter your option from above list:2

base time:19.90s
________________________________________
Enter base time for the particular stroke:19.90

Time taken by the athlete to complete the course:25

___________________________________________
The athletes points:504

GRADE=B

=== Code Execution Successful ===
CASE 3:
Enter name of the athlete:rianna

Enter the country the athlete represents:canada

Enter gender of the athlete:female

Enter the age of the athlete:22

Enter the type of stroke performed by the athlete:
1.women free style stroke___50m__
2.men free style stroke___50m___ s
3.women butterfly stroke___50m__ s
4.men butterfly stroke___50m___ 
Enter your option from above list:3

base time:23.94s
________________________________________
Enter base time for the particular stroke:23.94

Time taken by the athlete to complete the course:30

___________________________________________
The athletes points:508

GRADE=B

=== Code Execution Successful ===
CASE 4:
Enter name of the athlete:JAKE

Enter the country the athlete represents:london

Enter gender of the athlete:male

Enter the age of the athlete:34

Enter the type of stroke performed by the athlete:
1.women free style stroke___50m__
2.men free style stroke___50m___ s
3.women butterfly stroke___50m__ s
4.men butterfly stroke___50m___ 
Enter your option from above list:4

base time:21.32s
________________________________________
Enter base time for the particular stroke:21.32

Time taken by the athlete to complete the course:35

___________________________________________
The athletes points:226

GRADE=C

=== Code Execution Successful ===
