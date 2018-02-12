#include <iostream>
#include <string>
using namespace std;

#include "ofMain.h"
#include "ofApp.h"

using namespace std;

//========================================================================
int main( ){

	cout << "Hello from main.";
	// <-------- setup the GL context
	ofSetupOpenGL(1024,768,OF_WINDOW);			

	// this kicks off the running of my app
	// can be OF_WINDOW or OF_FULLSCREEN
	// pass in width and height too:
	ofRunApp(new ofApp());

}
