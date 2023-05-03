#include <glut.h>

#include <GL/gl.h>
#include <GL/glu.h>

void MyDisplay() {
	glClear(GL_COLOR_BUFFER_BIT); // 컬러 쓰기를 위해 현재 활성화된 버퍼.

	glPolygonMode(GL_FRONT, GL_LINE); // 와이어 프레임 설정
	glPolygonMode(GL_BACK, GL_LINE); // 와이어 프레임 설정

	glColor3f(255, 0, 0); // 빨간색 설정
	glutSolidTeapot(0.5); // 티 팟 생성
	glFlush(); // 모아둔 명령어 보내기
}

int main(int argc, char* argv[]) {
	glutInit(&argc, argv); // 초기화
	glutCreateWindow("OpenGl Teapot "); // Title Bar
	glutDisplayFunc(MyDisplay); // 함수 호출
	glutMainLoop();// 이벤트 처리 루프
	return 0;
}
