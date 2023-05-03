#include <glut.h>

#include <GL/gl.h>
#include <GL/glu.h>

void MyDisplay() {
	glClear(GL_COLOR_BUFFER_BIT); // �÷� ���⸦ ���� ���� Ȱ��ȭ�� ����.

	glPolygonMode(GL_FRONT, GL_LINE); // ���̾� ������ ����
	glPolygonMode(GL_BACK, GL_LINE); // ���̾� ������ ����

	glColor3f(255, 0, 0); // ������ ����
	glutSolidTeapot(0.5); // Ƽ �� ����
	glFlush(); // ��Ƶ� ��ɾ� ������
}

int main(int argc, char* argv[]) {
	glutInit(&argc, argv); // �ʱ�ȭ
	glutCreateWindow("OpenGl Teapot "); // Title Bar
	glutDisplayFunc(MyDisplay); // �Լ� ȣ��
	glutMainLoop();// �̺�Ʈ ó�� ����
	return 0;
}
