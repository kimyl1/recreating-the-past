#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    player.load("input.mov");
    player.play();
    player.setLoopState(OF_LOOP_NORMAL);
    
    /*grabber.initGrabber(640, 480);
    threshImg.allocate(grabber.getWidth(),
                    grabber.getHeight(),
                    OF_IMAGE_GRAYSCALE);*/
    
}

//--------------------------------------------------------------
void ofApp::update(){
    player.update();
    /*if (player.isFrameNew()){
        finder.findContours(player);
    }*/
    player.update();
    if (player.isFrameNew()){
        finder.findContours(player);
        
        if (finder.size() > 0){
            ofPolyline line = finder.getPolyline(0);
            line = line.getResampledBySpacing(0.5);
            line = line.getSmoothed(3);
            ofPath p;
            p.setFilled(true);
            for(int i = 0; i < line.getVertices().size(); i++) {
                if(i == 0) {
                    p.newSubPath();
                    p.moveTo(line.getVertices()[i] );
                } else {
                    p.lineTo(line.getVertices()[i] );
                }
            }
            p.close();
            p.simplify();
            paths.push_back(p);
            if (paths.size() > 50){
                paths.erase(paths.begin());
            }
        }
    }


}

//--------------------------------------------------------------
void ofApp::draw(){
    player.draw(0,0);
    
    ofTranslate(player.getWidth(),0);
    ofScale(2,2);
    ofBackground(0);
    
    for (int i = 0; i < paths.size(); i++){
        float pct = ofMap(i,0, paths.size(), 0, 1);
        //paths[i].setColor(ofColor(127 + 127 * sin(pct*10.0)));
        paths[i].setColor(ofColor(ofRandom(255)* sin(pct*10.0), ofRandom(255)* sin(pct*10.0), ofRandom(255)* sin(pct*10.0)));
       
        paths[i].draw();
    }
}
    /*player.draw(0,0);
    
    ofTranslate(player.getWidth(),0);
    ofScale(2,2);
    ofBackground(0);
    
    if (finder.size() > 0){
        ofPolyline line = finder.getPolyline(0);
        //line = line.getResampledBySpacing(0.5);
        //line = line.getSmoothed(3);
        //line.draw();
        //line.close();
        
        lines.push_back(line);
        
        ofPath path;
        for(int i = 0; i < line.getVertices().size(); i++) {
                if(i == 0) {
                    path.newSubPath();
                    path.moveTo(line.getVertices()[i] );
                } else {
                    path.lineTo(line.getVertices()[i] );
                }
            paths.push_back(path);
            }
            path.close();
            path.simplify();
            
        if (paths.size() > 50){
            paths.erase(paths.begin());
         }
        
        for (int i = 0; i < paths.size(); i++){
                    paths[i].draw();
                }
        //if (lines.size() > 100){
            //lines.erase(lines.begin());
            //path.setColor(0);
        //}
        for (int i = 0; i < lines.size()-1; i = i+10){
            // Populate clipper
                clipper.addPolyline(lines[i], ClipperLib::ptSubject);
                clipper.addPolyline(lines[i+1], ClipperLib::ptClip);
        }
        // Calculate intersection between shapes
        auto intersection = clipper.getClipped(ClipperLib::ClipType::ctIntersection);

        // Draw result
        ofBeginShape();
        for (auto& shape: intersection) {
            ofVector(shape);
        }
        ofEndShape();
            //ofFill();
            //ofSetColor(ofColor::red);
            //lines[i].draw();
            lines[i].setColor(ofRandom(0,255),
                              ofRandom(0,255),
                              ofRandom(0,255));
            //path.draw();
           //
        //}
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
