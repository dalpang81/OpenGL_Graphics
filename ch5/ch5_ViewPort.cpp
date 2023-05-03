#include <glut.h> // GLUT ���̺귯�� �Լ� ����� ���� ����
#include <GL/gl.h> // GL ���̺귯�� �Լ� ����� ���� ����
#include <GL/GLU.h> // GLU ���̺귯�� �Լ� ����� ���� ����

void MyDisplay() {
	glClear(GL_COLOR_BUFFER_BIT); // �÷� ���⸦ ���� ���� Ȱ��ȭ �� ����
	glViewport(0, 0, 300, 300); //�� ��Ʈ�� �����Ǵ� ��ġ, ũ�� ����
	glColor3f(1.0, 1.0, 1.0); // �� ��Ʈ�� ���� ����
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
	glutInitDisplayMode(GLUT_RGB); //�������� �⺻ �÷� ��带 RGB���� ����
	glutInitWindowSize(300, 300); //������ ���� 300ȭ�ҷ�, ������ ���̸� 300ȭ�ҷ� ����
	glutInitWindowPosition(0, 0); //�������� �»���� ��ǥ(0, 0)�� ��ġ
	glutCreateWindow("OpenGl Sample Drawing"); // GLUT���� ���ο� �����츦 �����϶�� ��ɾ� ���ڿ��� ��� Ÿ��Ʋ�ٿ� ��Ÿ��.
	glClearColor(0.0, 0.0, 0.0, 1.0); //�ʱ�ȭ ���̶�� ���� ������ ���� ���� R, G, B, A �Ķ���� ����
	glMatrixMode(GL_PROJECTION); //���� ����� ��ȯ������� �����϶�� ��ɾ�
	glLoadIdentity(); //�� ��Ŀ� �ϴ� �׵� ����� ������� ��ɾ�
	glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0); //������ ���� �ش� ��Ŀ� ������
	glutDisplayFunc(MyDisplay); // MyDisplay��� �Լ��� ���÷��� �̺�Ʈ�� ���� �ݹ��Լ��� ���.
	glutMainLoop(); // �̺�Ʈ ������ ������ �ϱ� ������ �����Լ� �������� �׻� gluMainLoop()�� ����.
	return 0;
}
