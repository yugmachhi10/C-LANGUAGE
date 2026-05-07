#include<stdio.h>

struct student {
    int roll_no;
    char name[50];
    char gender;
    float marks;

};

int main (){
    struct student s[10];
    int i,n,j,searchRoll, found =0;

    printf("enter the umber of students");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    printf("enter details of student %d \n",i+1);
    printf("roll no");
    scanf("%d",&s[i].roll_no);

    printf("Name:");
    scanf("%s",s[i].name);

    printf("gender (M/F):");
    scanf("%c", &s[i].gender);

    printf("marks(percentage)");
    scanf("%f", &s[i].marks);

    printf("\n---------student details---------\n");
    for(i=0;i<n;i++){
        printf("%d \t%s, \t%c, \t%.2f\n ",s[i].roll_no, s[i].name, s[i].gender, s[i].marks);

    }
    return 0;
}
/*for(i=0;i<n-1;i++){
for(j=1;1<n;j++){
    if(s[i].marks<s[j].marks){
        struct student temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
}
}

printf("\n-------student sorted by percenatage (descending)--------\n");
for(i=0;i<n;i++){
    printf("%d \t%s \t%c \t%.2f \n",s[i].roll_no);
}


}*/