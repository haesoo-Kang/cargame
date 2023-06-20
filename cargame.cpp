#include <stdio.h>
#include <stdlib.h>

#define MAX_SPEED 200 // 최대 속도
#define DISTANCE 1000 // 목표 지점까지의 거리

int main() {
    int playerSpeed = 0; // 플레이어의 속도
    int distanceTraveled = 0; // 이동한 거리

    printf("자동차 게임에 오신 것을 환영합니다!\n");
    printf("목표 지점까지 최대한 빠르게 도달하세요!\n\n");

    while (distanceTraveled < DISTANCE) {
        printf("현재 속도: %d km/h\n", playerSpeed);
        printf("목표 지점까지 남은 거리: %d km\n\n", DISTANCE - distanceTraveled);

        int choice;
        printf("속도를 선택하세요 (0에서 %d 사이): ", MAX_SPEED);
        scanf_s("%d", &choice);

        if (choice < 0 || choice > MAX_SPEED) {
            printf("올바른 속도를 입력하세요.\n");
            continue;
        }

        playerSpeed = choice;
        distanceTraveled += playerSpeed;

        if (distanceTraveled > DISTANCE) {
            distanceTraveled = DISTANCE;
        }
    }

    printf("\n축하합니다! 목표 지점에 도달했습니다!\n");
    printf("총 이동 거리: %d km\n", distanceTraveled);
    printf("플레이어의 최종 속도: %d km/h\n", playerSpeed);

    return 0;
}