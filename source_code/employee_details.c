#include <stdio.h>
void sep(){
    printf("--------------------------------------------------------------------------------\n");
}
int main()
{
    int len, roll = 0,stat=0;
    struct employee_details
    {
        int emp_id, emp_age, emp_salary;
        char spam[20], emp_name[20], emp_address[20], emp_department[20];
    };
    sep();
    printf("How many employee data do you want to store : ");
    scanf("%d", &len);
    struct employee_details emp[len];
    do
    {
        int choice = 0,id=0;
        sep();
        printf("1.Add employee data\n2.Display employee data\n3.Exit\nWhat do you want to do :");
        scanf("%d", &choice);
        sep();
        switch (choice)
        {
        case 1:
            printf("Enter employee %d id : ", roll + 1);
            scanf("%d", &emp[roll].emp_id);
            fgets(emp[roll].spam, sizeof(emp[roll].spam), stdin);
            printf("Enter employee %d name : ", roll + 1);
            fgets(emp[roll].emp_name, sizeof(emp[roll].emp_name), stdin);
            printf("Enter employee %d age : ", roll + 1);
            scanf("%d", &emp[roll].emp_age);
            printf("Enter employee %d salary : ", roll + 1);
            scanf("%d", &emp[roll].emp_salary);
            fgets(emp[roll].spam, sizeof(emp[roll].spam), stdin);
            printf("Enter employee %d address : ", roll + 1);
            fgets(emp[roll].emp_address, sizeof(emp[roll].emp_address), stdin);
            printf("Enter employee %d department : ", roll + 1);
            fgets(emp[roll].emp_department, sizeof(emp[roll].emp_department), stdin);
            roll++;
            break;
        case 2:
            printf("enter employee id : ");
            scanf("%d",&id);
            sep();
            for (int i = 0; i < len; i++)
            {
                if (emp[i].emp_id == id)
                {
                    printf("Employee id : %d\n", emp[i].emp_id);
                    printf("Employee name : %s", emp[i].emp_name);
                    printf("Employee age : %d\n", emp[i].emp_age);
                    printf("Employee salary : %d\n", emp[i].emp_salary);
                    printf("Employee address : %s", emp[i].emp_address);
                    printf("Employee department : %s", emp[i].emp_department);
                }
            }
            break;
        case 3:
            stat = 1;
            break;
        default:
            printf("Invalid choice\n");
        }
    }while (stat==0);
    return 0;
}