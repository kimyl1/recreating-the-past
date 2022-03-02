#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    colors[1] = ofColor(255,240,0); //yellow
    colors[2] = ofColor(0); //black
    colors[3] = ofColor(175,175,175); //grey
    colors[4] = ofColor(225,75,20); //red
    colors[5] = ofColor(225,75,20); //red
    colors[6] = ofColor(255,240,0); //yellow
}

//--------------------------------------------------------------
void ofApp::update(){
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    float w = ofGetWidth(); //small rectangles = width of w/38
    float h = ofGetHeight();
    ofBackground(255);
    
    //Black rectangle in lower third
    ofSetColor(0);
    ofDrawRectangle(0+(ofGetMouseX()*-2),12*(h/18)+(ofGetMouseY()*-2),w,(w/3)-10);
    
    //Horizontal rectangles in upper third
    ofSetColor(175,175,175);
    ofDrawRectangle(0+ofGetMouseX()*2,0+ofGetMouseY()*2,w,(w/3)-10);
    for(int j = 0; j<6; j++){
        if (j < 3){
            ofSetColor(255); //white
        } else {
            ofSetColor(0); //black
        }
        ofDrawRectangle(w/16+(ofGetMouseX()*-1),(j*h/18)+(ofGetMouseY()*-1),w,w/36);
    }
    
    //Vertical rectangles
    for(int i=0; i<6; i++){
        ofSetColor(colors[i+1]);
        ofDrawRectangle(i*(w/6)+ofGetMouseX()+1,0+ofGetMouseY()+1,w/12,h);
    }
    
    //Horizontal rectangles in middle third
    for(int j = 6; j<12; j++){
        if (j < 9){
            ofSetColor(0); //white
        } else {
            ofSetColor(225,75,20); //black
        }
        ofDrawRectangle(0+(ofGetMouseX()*-0.5),j*(h/18)+(ofGetMouseY()*-0.5),w,w/36);
    }
    //Horizontal rectangles in lower third
    for(int j = 12; j<18; j++){
        ofSetColor(175,175,175); //grey
        ofDrawRectangle(0+ofGetMouseX()*2,j*(h/18)+ofGetMouseY()*2,w,w/36);
    }
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

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
