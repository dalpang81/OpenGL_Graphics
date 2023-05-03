#include <glut.h> // GLUT 라이브러리 함수 사용을 위한 선언
#include <GL/gl.h> // GL 라이브러리 함수 사용을 위한 선언
#include <GL/GLU.h> // GLU 라이브러리 함수 사용을 위한 선언

void MyDisplay() {
	glClear(GL_COLOR_BUFFER_BIT); // 컬러 쓰기를 위해 현재 활성화 된 버퍼
	glViewport(0, 0, 300, 300); //뷰 포트가 생성되는 위치, 크기 설정
	glColor3f(1.0, 1.0, 1.0); // 뷰 포트의 색상 설정
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
	glutInitDisplayMode(GLUT_RGB); //윈도우의 기본 컬러 모드를 RGB모드로 설정
	glutInitWindowSize(300, 300); //윈도우 폭을 300화소로, 윈도우 높이를 300화소로 설정
	glutInitWindowPosition(0, 0); //윈도우의 좌상단을 좌표(0, 0)에 위치
	glutCreateWindow("OpenGl Sample Drawing"); // GLUT에게 새로운 윈도우를 생성하라는 명령어 문자열은 상단 타이틀바에 나타남.
	glClearColor(0.0, 0.0, 0.0, 1.0); //초기화 색이라는 상태 변수의 값을 설정 R, G, B, A 파라미터 정의
	glMatrixMode(GL_PROJECTION); //투상 행렬을 변환대상으로 설정하라는 명령어
	glLoadIdentity(); //이 행렬에 일단 항등 행렬을 실으라는 명령어
	glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0); //지정한 값이 해당 행렬에 곱해짐
	glutDisplayFunc(MyDisplay); // MyDisplay라는 함수를 디스플레이 이벤트에 대한 콜백함수로 등록.
	glutMainLoop(); // 이벤트 루프를 돌려야 하기 때문에 메인함수 마지막은 항상 gluMainLoop()로 끝남.
	return 0;
}
