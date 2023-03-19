/* write a C program to find the eligibility of admission for a professional course based on the following criteria.
Eligiblity criteria : Marks in Maths >=65 and Marks in Phy >=55 and Marks in Chem>=50 and Total in all three subject >=190 or Total in Maths and Physics >=140 ------------------------------------- Input the marks obtained in Physics :65 Input the marks obtained in Chemistry :51 Input the marks obtained in Mathematics :72 Total marks of Maths, Physics and Chemistry : 188 Total marks of Maths and Physics : 137 The candidate is not eligible.
Expected Output :
The candidate is not eligible for admission. */

#include<stdio.h>
int main()
{
    int maths,physics,chemistry,total1,total2;

    printf("Enter the marks in maths, physics, chemistry:\n");
    scanf("%d%d%d",&maths,&physics,&chemistry);

    total1=maths+physics+chemistry;
    total2=maths+physics;


    if(maths>=65)
    printf("The candidate is eligible\n");

    else if(physics>=55)
    printf("The candidate is eligible\n");
    
    else if(chemistry>=50)
    printf("The candidate is eligible\n");

    else if(total1>=190 || total2>=140)
    printf("The candidate is eligible\n");

    else
    printf("not eligible");
    
    return 0;
}