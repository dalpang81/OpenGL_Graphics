#include <glut.h> // GLUT 라이브러리 함수 사용을 위한 선언
#include <GL/gl.h> // GL 라이브러리 함수 사용을 위한 선언
#include <GL/GLU.h> // GLU 라이브러리 함수 사용을 위한 선언

void MyDisplay() {
	glClear(GL_COLOR_BUFFER_BIT); // 컬러 쓰기를 위해 현재 활성화 된 버퍼
	glBegin(GL_POLYGON); // 다각형 그리기 시작. GL_POLYGON은 아래 제시된 정점들이 다각형을 이루고 있음을 의미
	glVertex3f(-0.5, -0.5, 0.0); //x=-0.5, y=-0.5인 정점
	glVertex3f(0.5, -0.5, 0.0); //x=0.5, y=-0.5인 정점
	glVertex3f(0.5, 0.5, 0.0); //x=0.5, y=0.5인 정점
	glVertex3f(-0.5, 0.5, 0.0); //x=-0.5, y=0.5인 정점
	glEnd(); // 다각형 그리기 종료
	glFlush(); // 일정한 분량의 명령어를 쌓아두었다가 한꺼번에 파이프라인 프로세서에 전달을 원하지 않을때 사용하는 명령어.
}

int main(int argc, char* argv[]) {
	glutInit(&argc, argv); // 초기화 선언
	glutCreateWindow("OpenGl Drawing Example"); // GLUT에게 새로운 윈도우를 생성하라는 명령어 문자열은 상단 타이틀바에 나타남.
	glutDisplayFunc(MyDisplay); // MyDisplay라는 함수를 디스플레이 이벤트에 대한 콜백함수로 등록.
	glutMainLoop(); // 이벤트 루프를 돌려야 하기 때문에 메인함수 마지막은 항상 gluMainLoop()로 끝남.
	return 0;
}
