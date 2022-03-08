#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    img.load("ken.jpg");
    img2.load("lillian.jpg");
    font.load("framd.ttf", 5);
}

//--------------------------------------------------------------
void ofApp::update(){
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(0);
        
        ofSetLineWidth(2);
        string quote = "Programmers, in my experience, tend to be painstaking, logical, inhibited, cautious, restrained, defensive, methodical, and ritualistic.";
        string quote_s = "P r o g r a m m e r s ,   i n   m y   e x p e r i e n c e ,   t e n d   t o   b e   p a i n s t a k i n g ,   l o g i c a l ,   i n h i b i t e d ,   c a u t i o u s ,   r e s t r a i n e d ,   d e f e n s i v e ,   m e t h o d i c a l ,   a n d   r i t u a l i s t i c . ";
        string quote_l = "The artist and the computer";
        string quote_nl = "Lillian Schwartz";
        string quote_nk = "KEN KNOWLTON";
        int quote_counter = 0;
        for (int i = 0; i < img2.getWidth(); i+=10){
            for (int j = 0; j < img2.getHeight(); j+=10){
                ofColor color = img2.getColor(i, j);
                ofSetColor(color);
                if(quote_counter < quote_nl.size()-1) {
                    //font.setSpaceSize(1.0+(10*ofGetMouseX()));
                    font.drawString(quote_nl.substr(quote_counter,quote_counter+1), i,j);
                    quote_counter += 1;
                } else {
                    quote_counter = 0;
                    //font.setSpaceSize(1.0+(10*ofGetMouseX()));
                    font.drawString(quote_nl.substr(quote_counter,quote_counter+1), i,j);
                }
            }
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
