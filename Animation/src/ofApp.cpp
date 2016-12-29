#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetFrameRate(30);

    baseAnimations.push_back(new LinearAnimation());
    baseAnimations.push_back(new TriangleAnimation());
    baseAnimations.push_back(new RotateScreen());
    baseAnimations.push_back(new CirculerAnimation());

    for(BaseAnimation* anim : baseAnimations){
        anim->setup();
    }

    player.load("FLASH.mp4");
    player.play();
}

//--------------------------------------------------------------
void ofApp::update(){
    player.update();
    for(BaseAnimation* anim : baseAnimations){
        anim->update();
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    player.draw(0, 0, ofGetWidth(),ofGetHeight());
    ofSetColor(255,200);
    ofPushMatrix();
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);

    for(BaseAnimation* anim : baseAnimations){
        anim->draw();
    }
    ofPopMatrix();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    for(BaseAnimation* anim : baseAnimations){
        anim->keyPressed(key);
    }
    if(key == ' '){
        for(BaseAnimation* anim : baseAnimations){
            anim->startAnimation();
        }
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

