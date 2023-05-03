#include <glut.h>
#include <stdlib.h>

#include <GL/gl.h>
#include <GL/glu.h>

GLfloat intX, intY;

void MyDisplay() {
	glClear(GL_COLOR_BUFFER_BIT);

	//glRotatef(-90, 1.0, 0.0, 0.0); //회전행렬 (초기화로 계속회전)
	glColor3f(1.0, 0.0, 0.0);


	//glutWireCube(0.5);
	//glutSolidCube(0.5);
	//glutWireCone(0.4, 0.8, 18, 9);
	//glutSolidCone(0.4, 0.8, 18, 9);
	//glutWireTorus(0.2, 0.6, 18, 36);
	//glutSolidTorus(0.2, 0.6, 18, 36);

	glBegin(GL_POLYGON);
	glVertex3f(-0.3 + intX, -0.3 + intY, 0.0); // 전역변수를 이용하여 점들을 이동
	glVertex3f(0.3 + intX, -0.3 + intY, 0.0);
	glVertex3f(0.3 + intX, 0.3 + intY, 0.0);
	glVertex3f(-0.3 + intX, 0.3 + intY, 0.0);
	glEnd();

	glFlush();
}

//add
void MyKeyboard(unsigned char KeyPressed, int X, int Y) {
	switch (KeyPressed) {

	case 'Q':
		exit(0); break;

	case 'q':
		exit(0); break;
	}
}

void processSpecialKeys(int key, int x, int y) // glut.h에 정의된 키입력을 받기위한 함수
{
	switch (key) {

	case GLUT_KEY_LEFT:
		intX -= 0.1f; // 왼쪽으로 0.1만큼 이동
		break;

	case GLUT_KEY_RIGHT:
		intX += 0.1f; // 오른쪽으로 0.1만큼 이동
		break;

	case GLUT_KEY_UP:
		intY += 0.1f; // 위로 0.1만큼 이동
		break;

	case GLUT_KEY_DOWN:
		intY -= 0.1f; // 아래로 0.1만큼 이동
		break;

	}
	glutPostRedisplay();
}

int main(int argc, char* argv[]) {
	glutInit(&argc, argv);
	glutCreateWindow("OpenGl Teapot 이원영");
	glutDisplayFunc(MyDisplay);
	// add
	glutKeyboardFunc(MyKeyboard);
	glutSpecialFunc(processSpecialKeys); // 키 입력 이벤트를 활성화 시키기 위한 코드
	glutMainLoop();
	return 0;
}
