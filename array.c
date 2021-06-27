#include<stdio.h>

int main()
{
    int ft_marks[5] = {57,30,66,89,90},
        st_marks[5] = {85,24,65,90,53},
        final_marks[5] = {49,44,50,33,90};

    int i, marks, count;
    double total_marks[5];

    for(i = 0; i < 5; i++)
    {
        total_marks[i] = ft_marks[i] / 4.0 +
                         st_marks[i] / 4.0 +
                         final_marks[i] / 2.0;

    }

    for(i = 0; i <= 5; i++)
    {
        printf("Roll No: %d\t Total marks: %0.2lf\n", i, total_marks[i - 1]);
    }

    for(marks = 30; marks <= 90; marks++)
    {
        count = 0;
        for(i = 0; i<5; i++)
        {
            if(total_marks[i] == marks)
            {
                count++;
            }
        }
        printf("Marks: %d\tCount: %d\n",marks,count);
    }


    return 0;
}
