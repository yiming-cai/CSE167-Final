#ifndef _GEOMETRY_H_
#define _GEOMETRY_H_

#include "Object.h"
#include "Util.h"
extern bool bindedCubeVAO;
extern bool drawingCube;

class Geometry:public Object {
protected:
	GLuint shader;
	int selected;
	int haveTexture;
	GLuint textureID;

public:

	void draw(glm::mat4 C);
	void update();
	void setSelected() {
		selected = 1;
	}
};


#endif