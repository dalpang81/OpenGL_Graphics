#include <glut.h> // GLUT ���̺귯�� �Լ� ����� ���� ����
#include <GL/gl.h> // GL ���̺귯�� �Լ� ����� ���� ����
#include <GL/GLU.h> // GLU ���̺귯�� �Լ� ����� ���� ����

void MyDisplay() {
	glClear(GL_COLOR_BUFFER_BIT); // �÷� ���⸦ ���� ���� Ȱ��ȭ �� ����
	glBegin(GL_POLYGON); // �ٰ��� �׸��� ����. GL_POLYGON�� �Ʒ� ���õ� �������� �ٰ����� �̷�� ������ �ǹ�
	glVertex3f(-0.5, -0.5, 0.0); //x=-0.5, y=-0.5�� ����
	glVertex3f(0.5, -0.5, 0.0); //x=0.5, y=-0.5�� ����
	glVertex3f(0.5, 0.5, 0.0); //x=0.5, y=0.5�� ����
	glVertex3f(-0.5, 0.5, 0.0); //x=-0.5, y=0.5�� ����
	glEnd(); // �ٰ��� �׸��� ����
	glFlush(); // ������ �з��� ��ɾ �׾Ƶξ��ٰ� �Ѳ����� ���������� ���μ����� ������ ������ ������ ����ϴ� ��ɾ�.
}

int main(int argc, char* argv[]) {
	glutInit(&argc, argv); // �ʱ�ȭ ����
	glutCreateWindow("OpenGl Drawing Example"); // GLUT���� ���ο� �����츦 �����϶�� ��ɾ� ���ڿ��� ��� Ÿ��Ʋ�ٿ� ��Ÿ��.
	glutDisplayFunc(MyDisplay); // MyDisplay��� �Լ��� ���÷��� �̺�Ʈ�� ���� �ݹ��Լ��� ���.
	glutMainLoop(); // �̺�Ʈ ������ ������ �ϱ� ������ �����Լ� �������� �׻� gluMainLoop()�� ����.
	return 0;
}
