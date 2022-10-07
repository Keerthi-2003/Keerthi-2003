#include<stdio.h> 
struct student
{
	char name[30];
	int roll;
	float perc;
};
int main()
{
	struct student std;
	struct student *ptr;
	ptr=&std;
	printf("enter details of student");
	printf("\nname?");
	gets(ptr->name);
	printf("roll no?");
	scanf("%d",&ptr->roll);
	printf("percentage?");
	scanf("%f",&ptr->perc);
	printf("\nentered details");
	printf("\nname:%s\nrollno:%d\npercentage:%.02f\n",ptr->name,ptr->roll,ptr->perc);
	return 0;
}
