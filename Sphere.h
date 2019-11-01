#pragma once

#include <GL/glut.h>

void drawSphere(){
	float color[3] = {0,0,1};
	float pos[3] = {-3,0,-1};
	float size = 1;

	glPushMatrix();
		glTranslatef(pos[0], pos[1], pos[2]);
		glColor3f(color[0], color[1], color[2]);
		glutSolidSphere(size, 100, 100);
	glPopMatrix();
}

