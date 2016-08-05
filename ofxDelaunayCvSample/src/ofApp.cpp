#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetWindowShape(1280, 800);
    mode = 0;
    mExtendedCvScene.setup();
    mExtendScene.setup();
    mPlaneScene.setup();
}

//--------------------------------------------------------------
void ofApp::update(){
    switch (mode) {
        case 0:
            mExtendedCvScene.update();
            break;

        case 1:
            mExtendScene.update();
            break;

        case 2:
            mPlaneScene.update();
            break;
        default:
            break;
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    switch (mode) {
        case 0:
            mExtendedCvScene.draw();
            break;

        case 1:
            mExtendScene.draw();
            break;

        case 2:
            mPlaneScene.draw();
            break;
        default:
            break;
    }
    ofDrawBitmapStringHighlight("mode: "+ofToString(mode), 30,30);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if (key == 'c'){
        mode = (mode+1)%3;
    }

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
