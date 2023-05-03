#include <glut.h>
#include <stdlib.h>

#include <GL/gl.h>
#include <GL/glu.h>

GLfloat intX, intY;

void MyDisplay() {
	glClear(GL_COLOR_BUFFER_BIT);

	//glRotatef(-90, 1.0, 0.0, 0.0); //ȸ����� (�ʱ�ȭ�� ���ȸ��)
	glColor3f(1.0, 0.0, 0.0);


	//glutWireCube(0.5);
	//glutSolidCube(0.5);
	//glutWireCone(0.4, 0.8, 18, 9);
	//glutSolidCone(0.4, 0.8, 18, 9);
	//glutWireTorus(0.2, 0.6, 18, 36);
	//glutSolidTorus(0.2, 0.6, 18, 36);

	glBegin(GL_POLYGON);
	glVertex3f(-0.3 + intX, -0.3 + intY, 0.0); // ���������� �̿��Ͽ� ������ �̵�
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

void processSpecialKeys(int key, int x, int y) // glut.h�� ���ǵ� Ű�Է��� �ޱ����� �Լ�
{
	switch (key) {

	case GLUT_KEY_LEFT:
		intX -= 0.1f; // �������� 0.1��ŭ �̵�
		break;

	case GLUT_KEY_RIGHT:
		intX += 0.1f; // ���������� 0.1��ŭ �̵�
		break;

	case GLUT_KEY_UP:
		intY += 0.1f; // ���� 0.1��ŭ �̵�
		break;

	case GLUT_KEY_DOWN:
		intY -= 0.1f; // �Ʒ��� 0.1��ŭ �̵�
		break;

	}
	glutPostRedisplay();
}

int main(int argc, char* argv[]) {
	glutInit(&argc, argv);
	glutCreateWindow("OpenGl Teapot �̿���");
	glutDisplayFunc(MyDisplay);
	// add
	glutKeyboardFunc(MyKeyboard);
	glutSpecialFunc(processSpecialKeys); // Ű �Է� �̺�Ʈ�� Ȱ��ȭ ��Ű�� ���� �ڵ�
	glutMainLoop();
	return 0;
}
