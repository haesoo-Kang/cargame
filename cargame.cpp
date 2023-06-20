#include <stdio.h>
#include <stdlib.h>

#define MAX_SPEED 200 // �ִ� �ӵ�
#define DISTANCE 1000 // ��ǥ ���������� �Ÿ�

int main() {
    int playerSpeed = 0; // �÷��̾��� �ӵ�
    int distanceTraveled = 0; // �̵��� �Ÿ�

    printf("�ڵ��� ���ӿ� ���� ���� ȯ���մϴ�!\n");
    printf("��ǥ �������� �ִ��� ������ �����ϼ���!\n\n");

    while (distanceTraveled < DISTANCE) {
        printf("���� �ӵ�: %d km/h\n", playerSpeed);
        printf("��ǥ �������� ���� �Ÿ�: %d km\n\n", DISTANCE - distanceTraveled);

        int choice;
        printf("�ӵ��� �����ϼ��� (0���� %d ����): ", MAX_SPEED);
        scanf_s("%d", &choice);

        if (choice < 0 || choice > MAX_SPEED) {
            printf("�ùٸ� �ӵ��� �Է��ϼ���.\n");
            continue;
        }

        playerSpeed = choice;
        distanceTraveled += playerSpeed;

        if (distanceTraveled > DISTANCE) {
            distanceTraveled = DISTANCE;
        }
    }

    printf("\n�����մϴ�! ��ǥ ������ �����߽��ϴ�!\n");
    printf("�� �̵� �Ÿ�: %d km\n", distanceTraveled);
    printf("�÷��̾��� ���� �ӵ�: %d km/h\n", playerSpeed);

    return 0;
}