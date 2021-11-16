#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct play {
	char name[20];
	int  score;
	int  rat;
}p;


void high_score();
void start();
void help();

int main()
{
	int chc = 0;
	printf("Press 1 to start game\n2 High Score \n3 Help \n4 Exit : ");
	scanf_s("%d", &chc);

	switch (chc)
	{
	case 1:
		start();
		break;

	case 2:
		high_score();
		break;

	case 3: 
		help();
		break;

	default:
		exit(1);
	}

	getch();
}

// Creation for help menu 
void help()
{
	int ch;

	printf("\n\n ***** GAME HELP *****");
	printf("\n --------------------------");
	printf("\n >> Total of 10 questions");
	printf("\n >> Multiple choice questions use options keys 1,2,3,4 to answer");
	printf("\n >> Each question worth 5 point");
	printf("\n >> Only correctly answered questions will count, worng answers will not hurt your score");

	printf("\n\n ***** GOOD LUCK *****\n\n");

	printf("\nContinue playing? (1/0) :");
	scanf_s("%d", &ch);

	if (ch == 1)
	{
		start();
	}
	else
	{
		exit(1);
	}
}

//Game start and questions

void start()
{
	int ans;
	int count = 0;
	char rating[20];

	FILE* fp;

	if ((fp = fopen("\\tmp\play.txt", "a")) == NULL)
	{
		printf("error opening file\n");
	}

	printf("\nPlease enter your name: ");
	scanf("%s", p.name);




	printf("****** Good Luck \"%s \" with Quiz Game ******\n\n", p.name);


	printf("Q(1).What country uses the gourde as its currency? \n. 1. United States \t\t2. Haiti\n. 3. Germany\t\t 4. Poland\n\n");
	printf("Your answer: ");
	scanf_s("%d", &ans);

	if (ans == 2)
	{
		printf("Correct!! +5 Points\n\n");
		++count;
	}
	else
	{
		printf("Wrong answer. Correct answer is Haiti\n\n");
	}

	printf("Q(2).On which continent is Japan located? \n. 1. Antarctica \t\t2. Asia\n. 3. South America\t\t 4. North America\n\n");
	printf("Your answer: ");
	scanf_s("%d", &ans);

	if (ans == 2)
	{
		printf("Correct!! +5 Points\n\n");
		++count;
	}
	else
	{
		printf("Wrong answer. Correct answer is Asia\n\n");
	}

	printf("Q(3).What color is cobalt? \n. 1. Red \t\t2. Green\n. 3. Yellow\t\t 4. Blue\n\n");
	printf("Your answer: ");
	scanf_s("%d", &ans);

	if (ans == 4)
	{
		printf("Correct!! +5 Points\n\n");
		++count;
	}
	else
	{
		printf("Wrong answer. Correct answer is Blue\n\n");
	}

	printf("Q(4).What is the color of giraffe tongue? \n. 1. Pink \t\t2. Green\n. 3. Purple\t\t 4. Yellow\n\n");
	printf("Your answer: ");
	scanf_s("%d", &ans);

	if (ans == 3)
	{
		printf("Correct!! +5 Points\n\n");
		++count;
	}
	else
	{
		printf("Wrong answer. Correct answer is Purple\n\n");
	}

	printf("Q(5).How many kidneys does a normal person have? \n. 1. One \t\t2. Two\n. 3. Three\t\t 4. Four\n\n");
	printf("Your answer: ");
	scanf_s("%d", &ans);

	if (ans == 2)
	{
		printf("Correct!! +5 Points\n\n");
		++count;
	}
	else
	{
		printf("Wrong answer. Correct answer is Two\n\n");
	}

	printf("Q(6).From which cactus is tequila made? \n. 1. Agave \t\t2. Chin Cactus\n. 3. Saguaro\t\t 4. Star Cactus\n\n");
	printf("Your answer: ");
	scanf_s("%d", &ans);

	if (ans == 1)
	{
		printf("Correct!! +5 Points\n\n");
		++count;
	}
	else
	{
		printf("Wrong answer. Correct answer is Agave\n\n");
	}

	printf("Q(7).Where were the Olympic Games held in 1996 ? \n. 1. Japan \t\t2. Australia\n. 3. Germany\t\t 4. Atlanta\n\n");
	printf("Your answer: ");
	scanf_s("%d", &ans);

	if (ans == 4)
	{
		printf("Correct!! +5 Points\n\n");
		++count;
	}
	else
	{
		printf("Wrong answer. Correct answer is Atlanta\n\n");
	}

	printf("Q(8).Which famous British women murderer of the 19th century was never arrested? \n. 1. Jack The Ripper \t\t2. Ted Bundey\n. 3. The Nightstalker\t\t 4. Gary Ridgway\n\n");
	printf("Your answer: ");
	scanf_s("%d", &ans);

	if (ans == 1)
	{
		printf("Correct!! +5 Points\n\n");
		++count;
	}
	else
	{
		printf("Wrong answer. Correct answer is Jack The Ripper\n\n");
	}

	printf("Q(9).Which bird can swim but cannot fly? \n. 1. Flamingo \t\t2. Eagles\n. 3. Chicken\t\t 4. Penguin\n\n");
	printf("Your answer: ");
	scanf_s("%d", &ans);

	if (ans == 4)
	{
		printf("Correct!! +5 Points\n\n");
		++count;
	}
	else
	{
		printf("Wrong answer. Correct answer is Penguin\n\n");
	}

	printf("Q(10).Give another name for the study of fossils? \n. 1. Astrology \t\t2. Paleontology\n. 3. Herbology\t\t 4. Entomology\n\n");
	printf("Your answer: ");
	scanf_s("%d", &ans);

	if (ans == 2)
	{
		printf("Correct!! +5 Points\n\n");
		++count;
	}
	else
	{
		printf("Wrong answer. Correct answer is Paleontology\n\n");
	}


	//counting number of correct answers and, ratings  
	if (count > 0)
	{
		printf("Thanks for playing, Your scored: %d points \t", count * 5);

		p.score = count * 5;

		if (p.score >= 50)
		{
			printf("Rating: * * * * *");
			p.rat = 5;
		}
		else if (p.score >= 40 && p.score < 40)
		{
			printf("Rating: * * * *");
			p.rat = 4;
		}
		else if (p.score >= 20 && p.score < 40)
		{
			printf("Rating: * * *");
			p.rat = 3;
		}
		else if (p.score >= 10 && p.score < 20)
		{
			printf("Rating: * *");
			p.rat = 2;
		}
		else if (p.score < 10)
		{
			printf("Rating: *");
			p.rat = 1;
		}

		//writing to file  

		//printf(fp, "%s %d %d", p.name, p.score, p.rat);
		fclose(fp);
	}
	else
	{
		printf("Try again!");
	}
}

void high_score()
{

	int ch;

	FILE* fp;
	if ((fp = fopen("\\tmp\play.txt", "r")) == NULL)
	{
		//printf("error opening file\n");  
		printf("\nNo games played yet!\n");
	}
	else
	{

		printf("\n******************************* HIGH SCORES *******************************\n\n");
		printf("NAME     POINTS     RATING\n");
		while (fscanf(fp, "%s %d %d", p.name, &p.score, &p.rat) != EOF)
		{
			printf("____________________________\n");
			printf("%s     %d     %d star(s)\n\n", p.name, p.score, p.rat);
		}

		fclose(fp);

	}
	printf("\nContinue playing ? (1 - Yes and 0 - No) :  ");
	scanf_s("%d", &ch);

	if (ch == 1)
	{
		start();
	}
	else
	{
		exit(1);
	}

}
