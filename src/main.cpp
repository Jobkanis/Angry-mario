#include "freeglut.h"
#include <stdlib.h>
#include <math.h>
#include <assert.h>
#include "display.h"

unsigned int WindowSize_X = 800;  // resolution X
unsigned int WindowSize_Y = 600;  // resolution Y

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);                 // Initialize GLUT
	glutInitWindowSize(WindowSize_X, WindowSize_Y);   // Set the window's initial width & height
	glutCreateWindow("2DGAME"); // Create a window with the given title
	glutInitWindowPosition(50, 50); // Position the window's initial top-left corner
	glutDisplayFunc(display); // Register display callback handler for window re-paint
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}