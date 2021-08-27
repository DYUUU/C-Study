
#include <stdio.h>
#include <time.h> // >>clock 의 변수 정의 
#include <stdlib.h>
int level;
int arrayFish[6];
int* cursor; // >> 포인터 기능과 동일. 변수이름만 바꾼것
void initData();
void printfFishes();
void decreaseWater(long elapsedTime);
int checkFishAlive();

int main(void)
{
    long startTime = 0; // >>게임 시작시간
    long totalElapsedTime = 0; // >>총 경과시간
    long prevElapsedTime = 0; // >>직전 경과시간(최근에 물을 준 시간 간격)

    int num; // >>몇 번 어항의 물을 줄 것인지, (사용자 입력할 공간)
    initData(); // >>게임 데이터 초기화

    cursor = arrayFish; // >> cursor[0]...cursor[1]... 이 포인터 변수를 사용함으로써 이렇게 쓸수있다 (배열)

    startTime = clock(); // >>현재시간을 millisecond (1/1000 초) 단위로 변환
    while (1) // >> (1)라고 적으면 무한반복을 한다는 의미 / 물고기가 다죽을때까지 레벨이 다올를때까지 무한반복을 하기 위해 while문을 씀.
    {
        printfFishes();
        printf("몇 번 어항에 물을 주시겠습니까?\n");
        scanf_s("%d", &num);

        //입력값 체크
        if (num < 1 || num>6)
        {
            printf("\n입력값이 잘못되었습니다.\n");
            continue;
        }

        //총 경과시간
        totalElapsedTime = (clock() - startTime) / CLOCKS_PER_SEC; // >> 지금까지 총 얼마만큼 지냈느냐 알기위해서 함
        printf("총 경과시간 : %ld 초\n", totalElapsedTime); // 1d 가 아닌 ld 입니다 (엘디)

        //직전 물을 준 시간(마지막으로 물을 준 시간) 이후로 흐른 시간
        prevElapsedTime = totalElapsedTime - prevElapsedTime;
        printf("최근 경과시간 : %ld 초\n", prevElapsedTime);

        // 어항의 물을 감소 (증발)
        decreaseWater(prevElapsedTime);

        //사용자가 입력한 어항의 물을 준다.
        //1. 어항의 물이 0이면 ? >>> 물을 줄 필요가 없다.
        if (cursor[num - 1] <= 0)
        {
            printf("%d 번의 물고기는 이미 죽었습니다. 물을 주지않겠습니다.\n", num);
        }

        //2. 어항의 물이 0이 아니면? >>> 물을 줘야한다. 단! 100을 넘지 않는지 체크

        else if (cursor[num - 1] + 1 <= 100)
        {
            //물을 준다.
            printf("%d 번 어항에 물을 줍니다.\n\n", num);
            cursor[num - 1] += 1; // cursor[num - 1] = cursor[num - 1] +1 
        }

        //레벨업을 할 건지 (레벨업은 20초에 1번씩)>>> 물고기를 다죽이지 않고 살리면 레벨업 ->레벨업을하면 물이 더빨리 빠짐.
        if (totalElapsedTime / 20 > level - 1)
        {
           //레벨업
            level++; // >> ex) totalE -> 30이면 20으로 나눠줬을때 1.xxx되므로 1 > level(1)로 선언되기때문에 1-1=0이므로 1>0 => level up! 되는거다.
            printf(" ***축! Level Up! 기존 %d 레벨에서 -> %d 레벨로 업그레이드됬습니다. ***\n\n", level - 1, level);

            //최종 레벨: 5
            if (level == 5)
            {
                printf("\n\n축하합니다.MAX Level 달성하였습니다. 게임을 종료합니다.\n\n");
                exit(0);
            }

        }


        //모든 물고기가 죽었는지 확인
        if (checkFishAlive() == 0)
        {
            //물고기가 모두 죽었다.
            printf("모든 물고기가 죽었습니다...\n");
            exit(0);
        }
        else
        {
            //최소 한마리 이상에 물고기는 살아있음.
            printf("아직 물고기가 살아있어요.\n");
        }
        prevElapsedTime = totalElapsedTime;

        //ex) 10초 -> 15초 (5초 : prevElapsedTime 에 저장 -> 15초로 바꿔준다) ->25초(10초를 계산해줘야함) 25-15 =10인데 15초가 저장될공간이 없음
        //15초라는 값을 while문 끝나기 전에 prev에 집어넣어줘야한다.왜냐면 prev의 5초는 이미 썼기 때문에 의미가 없음
    }



    return 0;
}
void initData()
{
    level = 1; // >> 게임 레벨(1~5)
    for (int i = 0; i < 6; i++)
    {
        arrayFish[i] = 100; // >>어항의 물높이(0~100), arrayFish(어항 이름)

    }
}
void printfFishes()
{
    printf("%3d번 %3d번 %3d번 %3d번 %3d번 %3d번\n", 1, 2, 3, 4, 5, 6);
    for (int i = 0; i < 6; i++)
    {
        printf(" %4d ", arrayFish[i]);
    }
    printf("\n\n");
}
void decreaseWater(long elapsedTime)
{
    for (int i = 0; i < 6; i++)
    {
        // (여기 수정했어요) arrayFish -> arrayFish[i] 로 수정
        arrayFish[i] -= (level * 3 * (int)elapsedTime); // >> 만약 10초가 지났다.물을 직전에 주고나서 다시 물을 줄때까지 10초가 지났으면 현재 레벨이1일때 1*3*10 해서 물이 30만큼 물을감소
                                                     // >> 3 : 난이도 조절을 위한 값
        if (arrayFish[i] < 0) // (여기 수정했어요) ; 는 문장 끝에 있으면 if 가 끝나버려요!!
        {
            arrayFish[i] = 0;
        }
    }
}
int checkFishAlive()
{
    for (int i = 0; i < 6; i++)
    {
        if (arrayFish[i] > 0)
            return 1; // >> 아직 어항의 물이 남아있으니까.물고기는 살아있다.
    }
    return 0; //>> 물이없고 물고기가 다죽으면 여기로 온다.
}