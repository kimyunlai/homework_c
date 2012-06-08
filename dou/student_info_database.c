#include<stdio.h>
#define SIZE 30

struct student {
	int num;
	char name[30];
	char sex[5];
	int class;
	float score[3];
};

int inputStudentData(struct student *students);

void displayTips(){
	printf("****************************************************************\n");
	printf(" 1：输入数据  2：修改数据 3：处理数据  4：输出数据  5：退出系统 \n");
	printf("****************************************************************\n");
	printf("请输入数字（1-5）：");
}


int main(){
	int operaCode = 5, studentCount = 0;
	struct student students[SIZE];
	do{
		displayTips();
		scanf("%d", &operaCode);
		switch (operaCode) {
			case 1:
				studentCount = inputStudentData(students);
				break;
			case 2:
				break;
			case 3:
				break;
			case 4:
				break;
			case 5:
				break;
			default:
				printf("你的输入不是有效范围（1-5），程序即将退出\n");
				break;
		}
	}while(operaCode < 5 && operaCode >= 1);
}

int inputStudentData (struct student *students) {
	int studentNum = 0,count=0;
	printf("请输入学生的学号（输入0结束)： ");
	scanf("%d", &studentNum);
	while (studentNum != 0 && count < 30) {
		students->num = studentNum;
		printf("请输入学生的名字：");
		scanf("%s", &(students->name));
		printf("请输入学生的性别：");
		scanf("%s", &(students->sex));
		printf("请输入学生的班级：");
		scanf("%d", &(students->class));
		printf("请输入学生的语文成绩：");
		scanf("%f", &(students->score[0]));
		printf("请输入学生的数学成绩：");
		scanf("%f", &(students->score[1]));
		printf("请输入学生的英语成绩：");
		scanf("%f", &(students->score[2]));
		printf("请输入学生的学号（输入0结束)： ");
		scanf("%d", &studentNum);
		students++;
		count++;
	}
	return count;
}
