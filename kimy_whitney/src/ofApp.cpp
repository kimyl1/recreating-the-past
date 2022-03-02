#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    static_cast< float >(PI);
    for (int i = 0; i<16;i++){
        float circle_size = 45*ofGetElapsedTimef();
        if (circle_size < 125){
            float circle_size = 45*ofGetElapsedTimef();
        } else{
            circle_size = 125;
        }
          float xorig = 125;
          float yorig = 400;
          float radius = 100 + i * 20;
          float x = xorig + (50*((PI/4)*i));
          float y = yorig +(50*((PI/4)*i));
        
          
            for (int j = 0; j < 11; j++){
            float angle = ofMap(j,0, 11, 0, TWO_PI);
            float xPos = x + circle_size * cos(angle);
            float yPos = 400 + circle_size * sin(angle);
            if (j%2 == 0){
                    ofSetColor(0,225,0);
                } else {
                    ofSetColor(0,0,225);
                }
            ofDrawCircle(xPos,yPos, 5);
            }
        }
    }
    //ofBackground(0);
    /*for (int i = 0; i < 10; i++){
        float mod = ofMap(sin(ofGetElapsedTimef()), -1, 1, 0, 1);
        ofSetFrameRate(mod*sin(ofGetElapsedTimef()*5));
        float xorig = 400;
        float yorig = 400;
        float radius = 100 + i * 20;
        float angle = ofGetElapsedTimef() * ofMap(i, 0, 10, 1, 10);
        float x = xorig + radius * cos(angle*3);
        float y = yorig + radius * sin(angle*3.7);
        //ofSetColor(127 + 127 * sin(i*0.01),
        //        127 + 127 * sin(i*0.011),
        //        127 + 127 * sin(i*0.012));
        ofDrawCircle(x,y, 10);
     
     }*/
    //float x = ofMap(mod*sin(ofGetElapsedTimef()*5), -1, 1, 0, ofGetWidth())
    /*for (int a = 0; a<11;a++){
    
           float circle_size = 45*ofGetElapsedTimef();
                float xorig = 125;
                float yorig = 400;
                float radius = 100 + i * 20;
                float x = xorig + (50*((PI/4)*i));
                float y = yorig +(50*((PI/4)*i));
                if (i%2 == 0){
                    ofSetColor(0,225,0);
                } else {
                    ofSetColor(0,0,225);
                }
                
                if (circle_size < 212.4){
                    ofDrawCircle(x,400,circle_size);
                }
            }
        }*/


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
