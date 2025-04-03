#include <stdio.h>
#pragma warning (disable : 4996)

void main()
{
	int test = 0;

	int nHe = 0;
	int nAt = 0;
	int nMp = 0;
	int nAg = 0;

	//마지막에 null값이 들어가서 9글자 까지만 됨
	char cName[10];
	int nClass = 0;
	int nSelect = 0;

	//처음 시작 화면 
	printf("이름을 입력해 주세요.(영어: 9글자, 한글: 4글자)\n");

	//cName[10]이 다 들어감
	scanf("%s", cName);
	system("cls");
	printf("당신의 이름은 %-9s 입니다.\n", cName);

	//직업 선택
	printf("직업 선택해주세요.\n");
	printf("1.전사\n");
	printf("2.마법사\n");
	printf("3.궁수\n");
	printf("4.백수\n");
	
	scanf("%d", &nClass);
	system("cls");

	if (nClass == 1)
	{
		printf("당신은 전사로 시작합니다.\n");
		WarriorHealth(&nHe);
		WarriorAttack(&nAt);
		WarriorMp(&nMp);
		WarriorAglity(&nAg);
	}
	else if (nClass == 2)
	{
		printf("당신은 마법사로 시작합니다.\n");
		MagicHealth(&nHe);
		MagicAttack(&nAt);
		MagicMp(&nMp);
		MagicAglity(&nAg);
	}
	else if (nClass == 3)
	{
		printf("당신은 궁수로 시작합니다.\n");
		ArcherHealth(&nHe);
		ArcherAttack(&nAt);
		ArcherMp(&nMp);
		ArcherAglity(&nAg);
	}
	else
	{
		printf("당신은 백수입니다.\n");
		PoorHealth(&nHe);
		PoorAttack(&nAt);
		PoorMp(&nMp);
		PoorAglity(&nAg);
	}
	system("cls");

	printf("당신의 모험에 행운이 있기를 바랍니다.\n");
	_sleep(2000);
	system("cls");

	//게임 메인 화면
	printf("상태창\n");
	printf("방어력 : %d\n", nHe);
	printf("상태창 : %d\n", nAt);
	printf("상태창 : %d\n", nMp);
	printf("상태창 : %d\n\n", nAg);
	printf("1.던전 들어가기\n");
	printf("2.인벤토리\n");
	printf("3.게임 나가기\n");
	scanf("%d", &nSelect);

	for(nSelect = 0; nSelect > 3 || nSelect < 1;)
	if (nSelect < 1 || nSelect > 3)
	{
	printf("잘못된 선택지 입니다\n");
	continue;
	}

	//선택지
	if (nSelect == 1)
	{

	}
	else if (nSelect == 2)
	{

	}
	else
	{
		exit();
	}
}