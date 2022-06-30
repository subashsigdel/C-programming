// write a mprogram to find diameter , circumference and the area of circle
#include<stdio.h>
float pi=3.14;
void Area(float);
void Diameter(float);
void Circumference(float);
void main(){
    float r;
    printf("Enter the radius of the circle : ");
    scanf("%f",&r);
    Area(r);
    Diameter(r);
    Circumference(r);


}
void Area(float r){
    float areaon;
    areaon=pi*r*r;
    printf("The area of circle is %f \n",areaon);
    
}
void Diameter(float r){
    float dia;
    dia=2*r;
    printf("The Diameter of circle is %f\n",dia);
}
void Circumference(float r){
    float circum;
    circum=2*pi*r;
    printf("The circumference of The circle is %f \n",circum);
}