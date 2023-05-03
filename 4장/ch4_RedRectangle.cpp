#include <glut.h>

void MyDisplay() {
	glClear(GL_COLOR_BUFFER_BIT); // �÷� ���⸦ ���� ���� Ȱ��ȭ�� ����.
	glBegin(GL_POLYGON); // �ٰ��� �׸��� ����
	glColor3f(0, 255, 0); // ������ ����
	glVertex3f(-0.5, -0.5, 0.0); // 6 ~ 9�������� x, y, z�� ��ǥ ����
	glVertex3f(0.5, -0.5, 0.0);
	glVertex3f(0.5, 0.5, 0.0);
	glVertex3f(-0.5, 0.5, 0.0);
	glEnd(); // ���� �׸��� ����
	glFlush(); // ��Ƶ� ��ɾ� ������
}

int main(int argc, char* argv[]) {
	glutInit(&argc, argv); // �ʱ�ȭ
	glutCreateWindow("OpenGl Drawing Example"); // Title Bar
	glutDisplayFunc(MyDisplay); // �Լ� ȣ��
	glutMainLoop(); // �̺�Ʈ ó�� ����
	return 0;
}
