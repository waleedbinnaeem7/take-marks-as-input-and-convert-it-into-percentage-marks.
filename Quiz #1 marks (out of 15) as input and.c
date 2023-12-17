#include <stdio.h>

float per(int marks) {
    
    float t_marks = 15.0;
    
  
    float _percentage = (marks / t_marks) * 100.0;

    return _percentage;
}

int main() {
    int marks;

    
    printf("Input marks out of 15 : ");
    scanf("%d", &marks);

 
    float _percentage = per(marks);
    printf(" Marks in percentage: %.2f%%\n", _percentage);

    return 0;
}
