#ifndef BOX_H
#define BOX_H
class Box {
public:
	int width, height;
	char fill;
	Box(int w, int h) { setSize(w, h); fill = '*'; }
	void setFill(char f) { fill = f; }
	void setSize(int w, int h) { width = w; height = h; }
	void draw();
};

#endif