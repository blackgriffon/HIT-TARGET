#include "global.h"


extern USER User;
extern TARGET** Target;

void main()
{


        // 입력 값을 받는다.

        // 1. 마우스 클릭시 좌표 저장 및 True반환 아니면 FALSE. - 이상민
        //  1) 방향키 : 해당방향으로 표적이동 - 이상민
        //  2) 스페이스바 : 해당좌표에 타겟이 있는지 조건 검사 후 있으면 
        //      해당 타켓 좌표값 삭제후 구조체 포인터 배열 정리 - 김태우

        // 2. 조건에 맞으면 랜덤하게 좌표를 생성해서 타겟구조체에 넣는다. - 김대중

        // 3. 유저 구조체, 타겟 구조체의 정보를 읽어서 화면에 출력한다. - 윤지석
}
