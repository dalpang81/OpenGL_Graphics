#include <glut.h>

void MyDisplay() {
	glClear(GL_COLOR_BUFFER_BIT); // 컬러 쓰기를 위해 현재 활성화된 버퍼.
	glBegin(GL_POLYGON); // 다각형 그리기 시작
	glColor3f(0, 255, 0); // 빨간색 설정
	glVertex3f(-0.5, -0.5, 0.0); // 6 ~ 9꼭짓점의 x, y, z의 좌표 설정
	glVertex3f(0.5, -0.5, 0.0);
	glVertex3f(0.5, 0.5, 0.0);
	glVertex3f(-0.5, 0.5, 0.0);
	glEnd(); // 도형 그리기 종료
	glFlush(); // 모아둔 명령어 보내기
}

int main(int argc, char* argv[]) {
	glutInit(&argc, argv); // 초기화
	glutCreateWindow("OpenGl Drawing Example"); // Title Bar
	glutDisplayFunc(MyDisplay); // 함수 호출
	glutMainLoop(); // 이벤트 처리 루프
	return 0;
}
